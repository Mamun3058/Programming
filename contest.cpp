#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Ar[1001];
    int a[100];
    int w, T, n;
    scanf("%d", &T);
    int j ;
    for(w=1; w<=T; w++)
    {
        int j = 0;
        int g = 1;
        int b = 1;
        int s = 0;
        int ne = 1;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &Ar[i]);
            if(i && Ar[i] >= Ar[i-1])
                g++;
            if(i && Ar[i] <= Ar[i-1])
                b++;
            if(i && Ar[i] == Ar[i-1])
                ne++;
        }
        if(ne == n)
            printf("neutral\n");
        else if(g == n)
            printf("allGoodDays\n");
        else if(b == n)
            printf("allBadDays\n");
        else
        {
            for(int i=1; i<n-1; i++)
            {
                if(Ar[i-1] < Ar[i] && Ar[i] > Ar[i+1]){
                    s++;
                    a[j++] = i+1;
                }
            }
            if(s < 2)
                printf("none\n");
            else
                {
                    int lar = 0;
                    int di;
                    for(int i=0; i<j-1; i++)
                    {
                        di = a[i+1] - a[i];
                        if(di > lar)
                            lar = di;
                    }
                    printf("%d\n", lar-1);
                }
        }
    }
    return 0;
}
