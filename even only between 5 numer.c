#include<stdio.h>
int main()
{
    int j,i,c=0;
    for(j=0; j<5;j++)
        {
            scanf("%f",&i);
            if(i%2==0)
            {
                c++;
            }
        }
        printf("%d valores pares\n",c);
    return 0;
}
