#include<stdio.h>
int main()
        {
        int n,i;
        scanf("%d",&n);
        long long int s[n],c=0;
        for(i=0;i<n;i++)
                {
                scanf("%lld",&s[i]);
                c=c+s[i];
        }
        printf("%lld",c);
        return 0;
}
