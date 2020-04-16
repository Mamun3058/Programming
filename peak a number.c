
#include<stdio.h>
int main()
{
          long long int n;
          int s=0;
          scanf("%lld",&n);
         do{
          int c=0;
          s++;
          int a[n];
          int i;
          for(i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);
          }
          for(i=1;i<n-1;i++)
          {
                    if(a[i]>a[i-1]&&a[i]>a[i+1]&&a[i]!=0)
                              c++;
          }
          printf("Case %d: %d\n",s,c);
         scanf("%lld",&n);
         }while(n!=0);
          return 0;
}
