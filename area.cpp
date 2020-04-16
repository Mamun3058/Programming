#include<iostream>
using namespace std;
class circle
{
    float r;
    float pi=3.1416;
    float area;
    void set_area(float a)
    {
        r=a;
    }
    float calculate area()
    {
        area=pi*r*r;
        return area;
    }
    void showOutput()
    {
        cout<<area;
    }
};
int main()
{

}
