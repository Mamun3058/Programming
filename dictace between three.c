#include<stdio.h>
int main()
{
    int x1,x2,x3,a,b,c;
    scanf("%d%d%d",&x1,&x2,&x3);
    if((x1>x2&&x1<x3)||(x1<x2&&x1>x3))
    {
        a=abs(x2-x1);
        b=abs(x3-x1);
        c=abs(a+b);
        printf("%d",c);
    }
     else if((x2>x1&&x2<x3)||(x2<x1&&x2>x3))
    {
        a=abs(x1-x2);
        b=abs(x3-x2);
        c=abs(a+b);
        printf("%d",c);
    }
    else if((x3>x2&&x3<x1)||(x3<x2&&x3>x1))
    {
        a=abs(x1-x3);
        b=abs(x2-x3);
        c=abs(a+b);
        printf("%d",c);
    }
    return 0;
}
