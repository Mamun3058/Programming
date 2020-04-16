#include <stdio.h>
int main()
{
    int n,i,m;

    scanf("%d", &n);
    for(i=n;i>=1;i--)
    {
        for(m=1;m<=i;m++)
        printf("%d ", m);
        printf("\n");

    }

return 0;
}
