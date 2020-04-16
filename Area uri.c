#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,d,e,f,g,h=0;
    scanf("%f%f%f",&A,&B,&C);
    d=.5*A*C;
    e=3.14159*(C*C);
    f=(.5*(A+B))*C;
    g=B*B;
    h=A*B;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",d,e,f,g,h);
    return 0;
}
