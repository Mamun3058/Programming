#include <stdio.h>
#include <string.h>

int main() {
	char one[200] = "madam";
	char two[200];

	strcpy(two, one);
	strrev(two);

	if(strcmp(one, two) == 0)
		printf("The entered string %s is a palindrome.\n", one);
	else
		printf("The entered string %s is not a palindrome.\n", one);

	printf("The reverse of the string is %s.\n", two);
	return 0;
}
