#include<stdio.h>
int main()
{
    int n,i,total,attend,a,b,c,d,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d%d%d",&total,&attend,&a,&b,&c,&d);
        if (a<=0)
        {
            count++;
        }
        if(b<=0)
        {
            count++;
        }
        if (c<=0)
        {
            count++;
        }
        if (d<=0)
        {
            count++;
        }
        if (count>=attend)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
        count=0;
    }
    return 0;
}
