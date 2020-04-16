#include<stdio.h>
int main()
{
          long int t,i;
          scanf("%ld",&t);
          for(i=1;i<=t;i++)
          {
    long long int n, reversedInteger = 0, remainder, originalInteger;
    scanf("%lld", &n);
    originalInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    if (originalInteger == reversedInteger)
        printf("Case %d:Yes\n",i);
    else
        printf("Case %d:No\n",i);
          }
    return 0;
}
