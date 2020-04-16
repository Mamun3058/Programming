#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter your array : ");
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+5);
    int loc=-1,lv=0,uv=5,mid,key;
    printf("Enter your key value: ");
    scanf("%d",&key);
    while(lv<=uv)
    {
        mid=(lv+uv)/2;
        if (key==arr[mid])
        {
            loc=mid;
        }
        else if(key>arr[mid])
        {
            lv=mid+1;
        }
        else
        {
            uv=mid-1;
        }
    }
    printf("the location is %d",loc);
    return 0;
}
