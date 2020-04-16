#include<stdio.h>
int main()
{
    int a[1000],i,c=0,sum=0,avg;
    while(1)
    {
    scanf("%d",&a[1000]);
        if(a[1000]>=0)
        {
            sum+=a[1000];
            c++;
        }
        else
        {
            break;
        }
    }
    avg=sum/c;
    printf("%d\n",sum);
    printf("Avg=%d\n",avg);
    return 0;
}
