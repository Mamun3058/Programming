#include <stdio.h>
int main ()
{
    int a,b,c,T,i;
    scanf("%d",&T);
    for (i=1;i<=T;i++)
    {
        scanf("%d%d",&a,&b);
        c=a+b;
     printf( "Case %d: %d\n",i,c );
    }
     return 0;
}
