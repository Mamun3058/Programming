#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(w==1||w==2||w==3)
    {
        printf("NO");
    }
    else
    {
        if(w%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
