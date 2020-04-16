#include<stdio.h>
int main()
{
    int n,s,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        	if(i%2!=0)
            s=i;
        }
    }
    printf("%d\n",s);
return 0;
}
