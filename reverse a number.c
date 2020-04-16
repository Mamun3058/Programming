#include<stdio.h>
int main()
{
    int x,y=0,r,a=0;
    printf("Enter your number:");
    scanf("%d",&x);
    a=x;
    while(x!=0)
    {
    r=x%10;
    y=(y*10)+r;
    x=x/10;
    }
    printf("The reverse number is %d\n",y);
//    if(a==y)
//    {
//        printf("Palindrome\n");
//    }
//    else
//    {
//        printf("Not\n");
//    }
    return 0;
}
