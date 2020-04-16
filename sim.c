#include <stdio.h>


int main() {
    int num[14];
    int n;
    for(n=1;n<=13;n++)
    {
        scanf("%d",&num[n]);
    }
    if(num[1]==8 && num[2]==8 && num[3]==0 && num[4]==1 && num[5]==7)
    {
        printf("GP\n");
    }
    if(num[1]==8 && num[2]==8 && num[3]==0 && num[4]==1 && num[5]==8)
    {
        printf("RB\n");
    }
    if(num[1]==8 && num[2]==8 && num[3]==0 && num[4]==1 && num[5]==6)
    {
        printf("AL\n");
    }
    if(num[1]==8 && num[2]==8 && num[3]==0 && num[4]==1 && num[5]==5)
    {
        printf("TT\n");
    }
    if(num[1]==8 && num[2]==8 && num[3]==0 && num[4]==1 && num[5]==9)
    {
        printf("BL\n");
    }
    if(num[1]==8 && num[2]==8 && num[3]==0 && num[4]==1 && num[5]==1)
    {
        printf("CC\n");
    }
    else{

        printf("Sim Not Found");
    }
    return 0;
}
