#include <stdio.h>

int main(){
    int d1;
    int m1;
    int y1;
    scanf("%d %d %d",&d1,&m1,&y1);
    int d2;
    int m2;
    int y2;
    scanf("%d %d %d",&d2,&m2,&y2);
    int a,b,c,d;
    a=15*(d1-d2);
    b=500*(m1-m2);
    c=10000*(y1-y2);
    d=a+b+c;
    printf("%d\n",d);
    return 0;
}
