#include<iostream>
using namespace std;
class rec
{
public:
    int height;
    int width;
    int area();
};
inline int rec::area()
{
    return height*width;
}
int main()
{
    rec obj;
    obj.height=5;
    obj.width=6;
    cout<<"THE AREA IS "<<obj.area()<<endl;
    return 0;
}
