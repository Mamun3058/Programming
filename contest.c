#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Arr[1001];
    int a[100];
    int t, T, n;
    scanf("%d", &T);
    int j ;
    for(t=1; t<=T; t++)
    {
        int j = 0;
        int good = 1;
        int bad = 1;
        int special = 0;
        int neutral = 1;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &Arr[i]);
            if(i && Arr[i] >= Arr[i-1])
                good++;
            if(i && Arr[i] <= Arr[i-1])
                bad++;
            if(i && Arr[i] == Arr[i-1])
                neutral++;
        }
        if(neutral == n)
            printf("neutral\n");
        else if(good == n)
            printf("allGoodDays\n");
        else if(bad == n)
            printf("allBadDays\n");
        else
        {
            for(int i=1; i<n-1; i++)
            {
                if(Arr[i-1] < Arr[i] && Arr[i] > Arr[i+1]){
                    special++;
                    a[j++] = i+1;
                }
            }
            if(special < 2)
                printf("none\n");
            else
                {
                    int large = 0;
                    int dif;
                    for(int i=0; i<j-1; i++)
                    {
                        dif = a[i+1] - a[i];
                        if(dif > large)
                            large = dif;
                    }
                    printf("%d\n", large-1);
                }
        }
    }
    return 0;
}
