#include<stdio.h>
int main()
{
    int i,a,n;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("NULL\n");
        }
        else if(n>0)
        {
            if(n%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else
        {
             if(n%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}
