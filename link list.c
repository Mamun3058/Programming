#include<stdio.h>
#include<conio.h>
struct node
{
    int INFO;
    struct node *NEXT;
};
struct node *FIRST=NULL;
struct node *LAST=NULL;
void insert(int);
void delet(int);
void print(void);
struct node*search(int);
void main()
{
    int num1,num2,choice;
    struct node *location;
    while(1)
    {
        clrscr();
    printf("\nselect an option\n");
    printf("\n1.insert\n");
    printf("\n2.delete\n");
    printf("\n3.search\n");
    printf("\n4.print\n");
    printf("\n5.exit\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("Enter the element you want to insert:\n");
            scanf("%d",&num1);
            insert(num1);
            printf("Your element is succesfully inserted\n");
            getch();
            break;
        }
         case 2:
        {
            printf("Enter the element you want to deleted:\n");
            scanf("%d",&num1);
            num2=delete(num1);
            if(num2==-999)
            {
                printf("%d is not present",num1);
            }
            else
            {
             printf("Your element is succesfully deleted\n");
             getch();
             break;
            }
        }
         case 3:
            {
                printf("Enter the element you want to searched:\n");
               scanf("%d",&num1);
               location=search(num1);
               if(location==NULL)
                 {
                printf("%d is not present",num1);
                 }
              else
                {
             printf("Element %d is present before elment %d in the circular link list\n",num1,(location->NEXT)->INFO);
             getch();
             break;
                }
            }
         case 4:
            {
                print();
                getch();
                break;
            }
         case 5:
            {
                exit(1);
                break;
            }
         default :
            {
                printf("\n Incorrect choice,please try again.");
                getch();
                break;
            }
    }
 }
}
void insert(int value)
{

}
