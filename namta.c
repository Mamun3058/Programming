#include<stdio.h>
int main()
{
    int i,n,a,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        a=n*i;
        printf("%d * %d = %d\n",n,i,a);
    }
    }
    return 0;
}
