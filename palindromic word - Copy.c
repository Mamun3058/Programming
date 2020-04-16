#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
 char a[100],b[100];
 int i,k;
 printf("Type the string \n");
 gets(a);
 k=strlen(a);
 for(i=0;i<strlen(a);i++)
 {
  a[i]=b[k];
  k--;
 }           //at the end of this code the string "b" should be the reverse of "a"
 k=strcmp(a,b);
 if (k!=0)   //here I check if a=b or not
 {printf("palindrome");}
 else
 {printf("not palindrome");}
 getch();
 return 0;
}
