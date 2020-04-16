#include <stdio.h>
int main()
{
    int a, b;

    unsigned long long int result = 1;

    printf("Enter a Base number: ");
    scanf("%d", &a);

    printf("Enter an Exponent: ");
    scanf("%d", &b);

    while (b != 0)
    {
        result *= a;
        --b;
    }

    printf("Answer = %lld", result);

    return 0;
}
