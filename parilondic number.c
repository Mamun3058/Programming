#include <stdio.h>
int main()
{
    long int n, reversedInteger, remainder, originalInteger;
    int i, T;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {
        scanf("%ld", &n);
        reversedInteger = 0;
        originalInteger = n;

        while( n!=0 )
        {
            remainder = n%10;
            reversedInteger = reversedInteger*10 + remainder;
            n /= 10;
        }
        if (originalInteger == reversedInteger)
            printf("Case %d: Yes\n", i);
        else
            printf("Case %d: No\n", i);
    }
        return 0;
}
