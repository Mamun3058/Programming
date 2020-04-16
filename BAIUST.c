#include<stdio.h>
int main()
{
    int choice,choice1,choice2,choice3,choice4,choice5;
    printf("\t\t\tWelcome to BAIUST\n\n");
    printf("1.press 1 for CSE\n\n");
    printf("2.press 2 for EEE\n\n");
    printf("3.press 3 for CIVIL\n\n");
    printf("4.press 4 for BBA\n\n");
    printf("5.press 5 for ENGLISH\n\n");
    printf("Enter Your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            printf("\t\t\twelcome to the department of cse\n\n");
            printf("1.press 1 for student info\n\n");
            printf("2.press 2 for teacher info\n\n");
            printf("3.press 3 for labrotary info\n\n");
            printf("Enter your choice: ");
            scanf("%d",&choice1);
            switch(choice1)
            {
           case 1:
            {
              printf("\nstudent are good");
              break;
            }
           case 2:
            {
                printf("\nteacher are good");
                break;
            }
           case 3:
            {
                printf("\nlab is good");
                break;
            }
           default:
            {
                printf("\nInvalid Input");
            }
            }
            break;
        }
        case 2:
        {
            printf("\t\t\twelcome to the department of eee\n\n");
            printf("1.press 1 for student info\n\n");
            printf("2.press 2 for teacher info\n\n");
            printf("3.press 3 for labrotary info\n\n");
            printf("Enter your choice: ");
            scanf("%d",&choice2);
            switch(choice2)
            {
           case 1:
            {
              printf("\nstudent are good");
              break;
            }
           case 2:
            {
                printf("\nteacher are good");
                break;
            }
           case 3:
            {
                printf("\nlab is good");
                break;
            }
           default:
            {
                printf("\nInvalid Input");
            }
            }
            break;

        }
        case 3:
        {
            printf("\t\t\twelcome to the department of civil\n\n");
            printf("1.press 1 for student info\n\n");
            printf("2.press 2 for teacher info\n\n");
            printf("3.press 3 for labrotary info\n\n");
            printf("Enter your choice: ");
            scanf("%d",&choice3);
            switch(choice3)
            {
           case 1:
            {
              printf("\nstudent are good");
              break;
            }
           case 2:
            {
                printf("\nteacher are good");
                break;
            }
           case 3:
            {
                printf("\nlab is good");
                break;
            }
           default:
            {
                printf("\nInvalid Input");
            }
            }
            break;

        }
        case 4:
        {
            printf("\t\t\twelcome to the department of bba\n\n");
            printf("1.press 1 for student info\n\n");
            printf("2.press 2 for teacher info\n\n");
            printf("3.press 3 for labrotary info\n\n");
            printf("Enter your choice: ");
            scanf("%d",&choice4);
            switch(choice4)
            {
           case 1:
            {
              printf("\nstudent are good");
              break;
            }
           case 2:
            {
                printf("\nteacher are good");
                break;
            }
           case 3:
            {
                printf("\nlab is good");
                break;
            }
           default:
            {
                printf("\nInvalid Input");
            }
            }
            break;

        }
        case 5:
        {
            printf("\t\t\twelcome to the department of english\n\n");
            printf("1.press 1 for student info\n\n");
            printf("2.press 2 for teacher info\n\n");
            printf("3.press 3 for labrotary info\n\n");
            printf("Enter your choice: ");
            scanf("%d",&choice5);
            switch(choice5)
            {
           case 1:
            {
              printf("\nstudent are good");
              break;
            }
           case 2:
            {
                printf("\nteacher are good");
                break;
            }
           case 3:
            {
                printf("\nlab is good");
                break;
            }
           default:
            {
                printf("\nInvalid Input");
            }
            }
            break;

        }
           default:
            {
                printf("\nInvalid Input");
            }

    }
    return 0;
}
