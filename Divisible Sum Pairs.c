#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
    {
   int n,k,cin,a,i,j,a_i;
    scanf("%d%d",&n,&k);
    int array[n];
    for(a_i = 0;a_i < n;a_i++)
        {
       cin >> a[a_i];
       }
    int ans=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)
            {
                ans++;
            }
        }
    }
    printf("%d",ans);
    }
