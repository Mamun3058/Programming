#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a>=0 && a<=400.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15%c\n",(a+((a*15)/100)),((a*15)/100),37);
    }
     else if(a>=800.01 && a<=1200.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10%c\n",(a+((a*10)/100)),((a*10)/100),37);
    }
     else if(a>=400.01 && a<=800.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12%c\n",(a+((a*12)/100)),((a*12)/100),37);
    }
     else if(a>=1200.01 && a<=2000.00)
    {
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7%c\n",(a+((a*7)/100)),((a*7)/100),37);
    }
    return 0;
}
