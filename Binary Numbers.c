#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int remainder,count=0;
    while(a>0)
    {
        remainder = a%2;
        a = a/2;
        if(remainder==1)
        {
            count++;
        }
        else
        {
            count=0;
        }
    }
    printf("%d",count);
    return 0;
}
