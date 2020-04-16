#include<stdio.h>
int main()
{
    int T,i;
    long long int G,R;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        long long int g;
        scanf("%lld",&g);
        long long int n,s;
        s=(2*n+g)/2-n;
        printf("Case %d: %lld\n",i,s);
    }
    return 0;
}
