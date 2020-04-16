#include<stdio.h>
int main()
{
    int p1,p2,q1,q2,r1,r2,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&p1,&p2,&q1,&q2);
        if(p1==0 && p2==0)
        {
            r1=2*(q1-p1);
            r2=2*(q2-p2);
        }
        else
        {
            r1=3*(q1-p1);
            r2=3*(q2-p2);
        }
        printf("%d %d\n",r1,r2);
    }
    return 0;
}
