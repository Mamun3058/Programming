#include<stdio.h>
int main()
{
    int f1=0,f2=1,nextf=0,i,n;
    scanf("%d",&n);
    printf("%d %d ",f1,f2);
    for(i=1;i<=n;i++)
    {
        nextf=f1+f2;
        f1=f2;
        f2=nextf;
        if(nextf>n)
        {
            break;
        }
        printf("%d ",nextf);
    }
    return 0;
}
