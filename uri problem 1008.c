#include<stdio.h>
int main()
{
    int a;
    float b,c,SALARY;
    scanf("%d",&a);
    scanf("%f%f",&b,&c);
    SALARY=b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
