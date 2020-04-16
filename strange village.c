#include<stdio.h>
int main()
{
    int s,t,i,a,b,c;
    scanf("%d",&t);

    for (i=1; i<=t; i++)

    {
    scanf("%d%d%d",&a,&b,&c);

    s=a+b+c;

    printf("Family %d: %d\n",i,s);

    }

    return 0;
}
