#include<stdio.h>
int main()
{
    int a,c;
    float d;
    double b;
    char str[1001];
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%s",&str);
    gets (str);
    c=a+b;
    d=b+b;
    printf ("%d\n",c);
    printf("%.1f\n",d);
    printf("HackerRank ");
    puts (str);
    return 0;


}
