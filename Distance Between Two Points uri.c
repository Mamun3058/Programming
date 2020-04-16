#include<stdio.h>
int main()
{
    double x1,x2,y1,y2,a,b,d;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    d=sqrt(a+b);
    printf("%.4lf",d);
    return 0;
}
