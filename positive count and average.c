#include<stdio.h>
int main()
{
    int j,c=0;
    float i,sum=0,avg;
    for(j=0; j<6;j++)
        {
            scanf("%f",&i);
            if(i>0)
            {
            c++;
            sum=sum+i;
            }
        }
        avg=sum/c;
        printf("%d valores positivos\n",c);
        printf("%.1f\n",avg);
    return 0;
}
