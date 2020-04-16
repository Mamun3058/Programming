#include<stdio.h>
int main()
{
    char first[100];
    char last[100];
    scanf("%s%s",&first,&last);
    int n,k,c,i;
    scanf("%d%d",&k,&n);
    int sum=0;
    for(i=1;i<=n;i++)
    {
        int a;
        sum=sum+a;
    }
    c=(sum/n);
    printf("Name:%s,\t%s\n",first,last);
    printf("ID: %d",k);
    if(c>=90||c<=100)
    {
        printf("O");
    }
    return 0;
}
