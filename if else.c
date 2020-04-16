#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("Weird");
    }
    else if(a%2==0)
    {
        if(a<=5 && a>=2)
        {
            printf("Not Weird");
        }
        else if(a>=6 && a<=20)
        {
            printf("Weird");
        }
        else if (a>20)
        {
            printf("Not Weird");
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
