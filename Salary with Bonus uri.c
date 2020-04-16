#include<stdio.h>
int main()
{
    char name[100];
    scanf("%s",&name);
    double a,b,c,d;
    scanf("%lf%lf",&a,&b);
    c=((b*15)/100);
    d=a+c;
    printf("TOTAL = R$ %.2lf\n",d);
    return 0;
}

