#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int a[n];
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=n;i>=1;i--)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}
