#include<stdio.h>
int main()
    int a,b;
    scanf("%d%d",&a,&b);
    int reminder;
    while (a%b!=0)
    {
        reminder=a%b;
        a=b;
        b=reminder;
    }
    printf("Gcd value is %d",b);
    return 0;
}

