#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,s,area;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    d=(s-a);
    e=(s-b);
    f=(s-c);
    area=sqrt(s*d*e*f);
    printf("the area is :%f",area);

    return 0;


}
