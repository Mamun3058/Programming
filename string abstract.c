#include<stdio.h>
int main()
{
    char s1 [1000];
    char s2[1000];
    int a;
    scanf("%s",s1);
    gets (s1);
    scanf("%s",s2);
    gets (s2);
    scanf("%d",&a);
    printf("Title: ");
    puts (s1);
    printf("Author: ");
    puts (s2);
    printf("Price: %d",a);
    return 0;
}
