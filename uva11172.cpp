#include<iostream>
using namespace std;
int main()
{
    int a,b,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cin>>a>>b;
    if(a>b)
    {
      cout<<">"<<endl;
    }
     else if(a<b)
    {
       cout<<"<"<<endl;
     }
     else if(a==b)
     {
      cout<<"="<<endl;
     }
    }
    return 0;
}
