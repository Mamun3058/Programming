#include<stdio.h>
int main()
{
    int i,n,t;
    float x,y,z,c=0,d=0,e=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        if (t>0)
        {
            c++;
        }
        if(t<0)
        {
            d++;
        }
        if(t==0)
        {
            e++;
        }
    }
        x=c/n;
        y=d/n;
        z=e/n;
        printf("%f\n",x);
        printf("%f\n",y);
        printf("%f\n",z);
        return 0;
}
