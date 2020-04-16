#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
     char str2[100];
    strrev(str);
    int i;
    i=strcmp(str,str2);
    if (i==0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");

	printf("\nValue returned by strcmp() is: %d" , i);
	return 0;
}
