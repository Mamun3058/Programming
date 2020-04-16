#include<stdio.h>
int main()
{
    int n,i,t,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        count=count+t;
    }
    printf("%d\n",count);
    return 0;
}
