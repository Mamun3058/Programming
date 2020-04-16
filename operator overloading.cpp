#include<iostream>
using namespace std;
class Complex{
    int r,i;
    public:
        Complex()
        {
            r=0;i=0;
        }
        Complex(int a,int b)
        {
            r=a;i=b;
        }
        bool operator == (Complex &c);
        bool operator < (Complex &c);

        void show()
        {
            cout<<r<<"+"<<i<<"i"<<endl;
        }


};
bool Complex::operator == (Complex &p)
{
    if(r==p.r && i==p.i)
        return true;
    else
        return false;
}
bool Complex::operator < (Complex &p)
{
    if(r<p.r && i<p.i)
        return true;
    else
        return false;
}
int main()
{
    Complex c1(1,2),c2(3,4),c3;
    if(c1==c2)
        cout<<"EQUAL"<<endl;
    if(c1<c2)
        cout<<"c1 smaller"<<endl;
}

