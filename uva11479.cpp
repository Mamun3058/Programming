#include<iostream>
using namespace std;
int main()
{
    signed long int a,b,c;
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
       if(a<=0 ||b<=0||c<=0)
       {
           cout<<"case "<<i<<": Invalid"<<endl;
       }
       else if(a+b>c && b+c>a && a+c>b)
       {
           if(a==b && b==c)
           {
               cout<<"case "<<i<<": Equilateral"<<endl;
           }
           else if(a==b || b==c ||c==a)
           {
                cout<<"case "<<i<<": Isosceles"<<endl;
           }
           else
           {
                cout<<"case "<<i<<": Scalene"<<endl;
           }
       }
       else
       {
           cout<<"case "<<i<<": Invalid"<<endl;
       }
    }
    return 0;
}
