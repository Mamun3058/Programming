#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char a[110],b[110];
    cin>>a;
    cin>>b;
    int c=strlen(a);
    for(i=0; i<c; i++)
    {
        if(a[i]=='0'&&b[i]=='1')
        {
            a[i]='1';
        }
        else if(a[i]=='1'&&b[i]=='0')
        {
            a[i]='1';
        }
        else if(a[i]=='1'&&b[i]=='1')
        {
            a[i]='0';
        }
     else if(a[i]=='0'&&b[i]=='0')
        {
            a[i]='0';
        }
    }
    cout<<a;
    return 0;
}
