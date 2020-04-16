#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,m,n,d;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    m=(x2-x1)*(x2-x1);
    n=(y2-y1)*(y2-y1);
    d=sqrt(m+n);
    printf("%f is d",d);

    return 0;

}
