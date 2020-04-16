#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        b=a*(a-1)/2;
        printf("%d\n",b);
    }
    return 0;
}
