#include<iostream>
using namespace std;
class triangle
{
public:
    int height;
    int base;
    int area();
};
inline int triangle::area()
{
    return .5*base*height;
}
int main()
{
    triangle obj;
    cin>>obj.height>>obj.base;
    cout<<"The area is "<<obj.area()<<endl;
    return 0;
}
