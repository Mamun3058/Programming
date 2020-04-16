#include<iostream>
using namespace std;
int main()
{
    int t,i,n,temp=0,coun=0;
    cin>>t;
     for(i=1;i<=t;i++)
     {
         cin>>n;
         int arra[n];
         arra[0]=-99;
         for(int j=1;j<=n;j++)
         {
             cin>>arra[j];
             if(arra[j-1]<arra[j])
             {
                 temp++;

             }
             else if(arra[j-1]>arra[j])
             {
                 coun++;

             }
         }
         cout<<"case "<<i<<": "<<temp-1<<" "<<coun<<endl;
         temp=0;
         coun=0;
     }
     return 0;
}
