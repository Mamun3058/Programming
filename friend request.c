#include<stdio.h>

int main()
{
    int i, n, Mut, S;
    char Name[100];

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%s %d %d", Name, &S, &Mut);
        if(S==1 || Mut>=30)
            printf("%s\n", Name);
    }
    return 0;
}
