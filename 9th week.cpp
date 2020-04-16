#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
class convert
{
int number;
char *num_string;
public:
void set_number(int n)
{
    number=n;
}
void set_num_string(char *a)
{
    num_string=new char[strlen(a+1)];
    strcpy(num_string,a);
}
char *get_num_string()
{
    return num_string;
}
void reverse_num_string()
{
    strrev(num_string);
    cout<<num_string<<endl;
}
void concate_to_num_string(int n)
{
char s[100];
int i=0;
while(n!=0)
{
    s[i]=n%10+48;
    n=n/10;
    i++;
}
s[i]=NULL;
cout<<strrev(s)<<endl;
cout<<strcat(num_string,s)<<endl;
}
bool check_palindrome()
{
char b[200];
strcpy(b,num_string);
strrev(b);
if(strcmp(num_string,b) == 0)
    {
		return true;
	}
else
	 {
		return false;
	}
}
};
int main()
{
    convert a;
    a.set_num_string("madam");
    a.reverse_num_string();
    cout<<a.check_palindrome()<<endl;
    a.concate_to_num_string(123);
    a.reverse_num_string();
    cout<<a.check_palindrome()<<endl;
    return 0;
}
