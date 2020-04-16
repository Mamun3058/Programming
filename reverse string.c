#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[100],b[100];
    gets(a);
    b[100]=a[100];
    strrev(a);
    printf("%s\n",a);
    int c;
    c=strcmp(a,b);
    printf("%d",c);
    getch();
    return 0;
}
