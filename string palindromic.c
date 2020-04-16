#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25];
    gets(s1);
    char s2[25];
    s2==strrev(s1);
    int a;
    a=strcmp(s1,s2);
    if(a==0)
    {
        printf("Palindromic");
    }
    return 0;
}
