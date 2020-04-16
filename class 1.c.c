//LETS assume the center of circle is (x1,x2)and a point in the circumference is (x2,y2);write a complete c program to find the areas and perimeter of that circle..

#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,m,n,d,area,perimeter;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    m=(x2-x1)*(x2-x1);
    n=(y2-y1)*(y2-y1);
    d=sqrt(m+n);
    area=3.1416*(d*d);
    printf("%f is area",area);
    printf("%f is d",d);

    return 0;
}
