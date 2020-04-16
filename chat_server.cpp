#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#define MSG_SIZE 1024
#define NAME_SIZE 24
#define MAX_CONNECTIONS 100

// User list (Simple-linked list!!1)
struct chat_user {
    int socket_fd;
    char nickname[NAME_SIZE];
    struct sockaddr addr;
    struct chat_user* next;
};

// Messages to all connected clients.
void messageToAll(struct chat_user* firstUser, char* message, char closed)
{
    struct chat_user *ptrUser;
    if(firstUser == NULL)
        return;

    for(ptrUser = firstUser; ptrUser->next != NULL; ptrUser = ptrUser->next)
    {
        if( ptrUser->socket_fd == -1 )
            continue;

        write(ptrUser->socket_fd, message, strlen(message));
        if( closed == 1 )
            close(ptrUser->socket_fd);
    }
}

// Find user by socket id
struct chat_user* findUserBySocketId(struct chat_user* firstUser, int socket_id)
{
    struct chat_user *ptrUser;
    if(firstUser == NULL)
        return NULL;

    for(ptrUser = firstUser; ptrUser->next != NULL; ptrUser = ptrUser->next)
    {
        if( ptrUser->socket_fd == socket_id )
            return ptrUser;
    }

    return NULL;
}

int main(int argc, char *argv[])
{
    // file descriptors
    fd_set master_set, current_set;
    // user structures pointers (first, last, and two to temporary manipulate)
    struct chat_user *firstUser, *lastUser, *tempUser, *ptrUser;
    // socket structures
    struct sockaddr_in server_address;
    struct sockaddr_storage addr_storage;
    // sockets ids (server, max?, new?)
    int server_socketfd, max_socketfd, new_socketfd;
    // other
    int i;
    char msg[MSG_SIZE];

    /*
     * Reference:
     * http://www.mkssoftware.com/docs/man3/select.3.asp
     */
    FD_ZERO(&master_set);
    FD_ZERO(&current_set);

    // Creating the socket itself.
    server_socketfd                 = socket(AF_INET, SOCK_STREAM, 0);

    // Describes type of connection family (?! better explain...)
    server_address.sin_family       = AF_INET;
    server_address.sin_addr.s_addr  = htonl(INADDR_ANY);
    server_address.sin_port         = htons(7888);

    // Bind created socket with it family
    bind(server_socketfd, (struct sockaddr *)&server_address, sizeof(struct sockaddr_in));

    // Add socket identifier to master set (file descriptors)
    FD_SET(server_socketfd, &master_set);
    FD_SET(0, &master_set);

    // Initialize max fd
    max_socketfd = server_socketfd;

    if( listen(server_socketfd, MAX_CONNECTIONS) == -1)
    {
        perror("* Error with listen()");
        exit(1);
    }

    printf("*** Chat Service listening on port %d. ***\n", 7888);

    // Loop
    while(1)
    {
        // Sets the current set to server itself
        current_set = master_set;

        // Select current sockets to parse
        if( select(max_socketfd+1, &current_set, NULL, NULL, NULL) == -1 )
        {
            perror("* Error with select()");
            exit(1);
        }

        // Socket interaction
        for(i = 0; i < FD_SETSIZE; i++)
        {
            // Test if current set is really connected.
            if(!FD_ISSET(i, &current_set))
                continue;

            // New connection
            if( i == server_socketfd )
            {
                // Try to accept the connection [TODO: replace NULLs with correctly info catchers)
                if( (new_socketfd = accept(server_socketfd, NULL, NULL)) == -1 )
                {
                    perror("* Error with accept()");
                    exit(1);
                }

                printf("* Client Connected\n");

                // Add this socket to master set
                FD_SET(new_socketfd, &master_set);

                printf("New Socket ID: %d\n", new_socketfd);

                // Create a userList member
                if( firstUser == NULL )
                {
                    // Allocate chat_user struct into userList pointer
                    firstUser = (struct chat_user*)malloc(sizeof(struct chat_user));
                    firstUser->next = NULL;
                    firstUser->socket_fd = new_socketfd;
                    firstUser->addr = *((struct sockaddr *)&addr_storage);
                    lastUser  = firstUser;

                    sprintf(firstUser->nickname, "Unknown %d", new_socketfd);
                }
                else
                {
                    tempUser = (struct chat_user*)malloc(sizeof(struct chat_user));
                    tempUser->next = NULL;
                    tempUser->socket_fd = new_socketfd;
                    tempUser->addr = *((struct sockaddr *)&addr_storage);

                    sprintf(tempUser->nickname, "Unknown %d", new_socketfd);

                    // Update the pointer to next element
                    lastUser->next = tempUser;

                    // Update last element to current pointer
                    lastUser = tempUser;
                }

                // New element is the highest? Update variable
                if( new_socketfd > max_socketfd )
                {
                    max_socketfd = new_socketfd;
                }

            } // if( i == server_socketfd )
            else if( i == 0 )
            {
                // Keyboard interaction
                char keyboard_msg[MSG_SIZE];
                fgets(keyboard_msg, MSG_SIZE + 1, stdin);

                if( keyboard_msg[0] == '!')
                {
                    // Console Commands
                    if( strcmp(keyboard_msg+1, "quit\n") == 0 )
                    {
                        sprintf(msg, "[Server] Chat is closing down...\n");
                        messageToAll(firstUser, msg, 1);
                    }
                }
                else
                {
                    sprintf(msg, "[Server] %s", keyboard_msg);
                    messageToAll(firstUser, msg, 1);
                }
            } // else if( i == 0 )
            else if( i )
            {
                // Client saying anything
                char message[MSG_SIZE];
                int result;
                if( (result = read(i, message, MSG_SIZE)) > 0 )
                {
                    message[result]='\0';

                    ptrUser = findUserBySocketId(firstUser, i);
                    if( ptrUser == NULL )
                    {
                        printf("* Problem searching user id %d\n", i);
                        continue;
                    }

                    if( message[0] == '$' )
                    {
                        // System Message
                        if( strcmp(message+1, "nick\n") == 0 )
                        {
                            if( strlen(ptrUser->nickname) > 0 )
                            {
                                sprintf(msg, "[Server] %s is now %s.\n", ptrUser->nickname, "Testing");
                                messageToAll(firstUser, msg, 0);
                            }
                            sprintf(ptrUser->nickname, "%s", "Testing");
                        }
                    }
                    else if( message[0] == '!' )
                    {
                        // User Command
                        if( strcmp(message+1, "quit\n") == 0 )
                        {
                            sprintf(msg, "[Server] %s is leaving...\n", ptrUser->nickname);
                            messageToAll(firstUser, msg, 0);
                            close(ptrUser->socket_fd);
                        }
                    }
                    else
                    {
                        // Chat Message
                        sprintf(msg, "[%s] %s", ptrUser->nickname, message);
                        messageToAll(firstUser, msg, 0);
                    }
                }
            } // else if( i )
            else
            {
                // Client disconnected
                printf("*** CLIENT DISCONNECTED ***\n");
            } // else
        } // for(i = 0; i < max_socketfd; i++)
    }

    return EXIT_SUCCESS;
}
