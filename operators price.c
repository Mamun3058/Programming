#include<stdio.h>
int main()
{
    double a;
    int b,c,f;
    float d,e;
    scanf("%lf",&a);
    scanf("%d%d",&b,&c);
    d=(a*b)/100;
    e=(a*c)/100;
    f=a+d+e;
    printf("%d",f);
    return 0;
}
