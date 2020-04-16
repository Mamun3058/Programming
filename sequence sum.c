#include<stdio.h>
#include<math.h>
int main()
{
    int T, t, i, j, B, N, s, Inner, sum;
    double S;
    scanf("%d", &T);
    for(t=1; t<=T; t++)
    {
        scanf("%d%d", &N, &B);
        sum = 0;
        for(i=1; i<=N; i++)
        {
            j=i-1;
            Inner=0;
            while(j>=0)
            {
                S=pow(B, j);
                s = S;
                Inner = Inner + s;
                j=j-2;
            }
            sum = sum + Inner;
        }
        printf("Case %d: %d\n", t, sum);
    }
    return 0;
}
