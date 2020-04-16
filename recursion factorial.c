#include<stdio.h>
int factorial (int i)
{
    if(i==0)
    {
        return 1;
    }
    else
    {
        return i*factorial(i-1);
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int k;
    k=factorial(a);
    printf("%d",k);
    return 0;
}
