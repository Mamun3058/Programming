#include<stdio.h>
int main()
{
          int t;
          scanf("%d",&t);
          int j;
          for(j=1;j<=t;j++)
          {
                    long long int h;
                    scanf("%lld",&h);
                    long int a[h];
                    long long int g;
                    for(g=0;g<h;g++)
                    {
                              scanf("%lld",&a[g]);
                    }
                    long long k=0,s=0;
                    for(g=0;g<h;g++)
                    {
                              k=k^a[g];

                    }
                              printf("%lld\n",k);
          }
          return 0;
}
