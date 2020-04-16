#include<stdio.h>
int main()
{
    float a,b;
    int d,i;
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
    scanf("%f",&a);
    b=(a*a)/2;
    printf("the area is %f\n",b);
    }
    return 0;
}
