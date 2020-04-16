#include<stdio.h>
int main()
{
    int key,A[20],n,low=0,mid=0,i,count=0;
    printf("Take the number of element : ");
    scanf("%d",&n);

    printf("The elements are :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Take the key element :");
    scanf("%d",&key);
   int  high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(A[mid]==key)
        {
            printf("The value is found;\n in location=%d",mid);
            count++;
            break;
        }
        else
        {
            if(A[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    if(count==0)
        printf("The value is not present in the list ");

    return 0;

}
