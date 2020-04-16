#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+5);
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
