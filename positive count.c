#include<stdio.h>
int main()
{
    int j,i,c=0;
    for(j=0; j<6;j++)
        {
            scanf("%f",&i);
            if(i>0)
            c++;
        }
        printf("%d valores positivos\n",c);
    return 0;
}
