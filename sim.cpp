#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num[13];
    int n;
    for(n=1;n<=13;n++)
    {
        cin>>num[n];
    }
      for(n=1;n<=13;n++)
    {
        cout<<num[n];
    }
    if(num[0]==8 && num[1]==8 && num[2]==0 && num[3]==1 && num[4]==7)
    {
        cout<<"GP";
    }
    if(num[0]==8 && num[1]==8 && num[2]==0 && num[3]==1 && num[4]==8)
    {
        cout<<"RB";
    }
    if(num[0]==8 && num[1]==8 && num[2]==0 && num[3]==1 && num[4]==6)
    {
        cout<<"AL";
    }
    if(num[0]==8 && num[1]==8 && num[2]==0 && num[3]==1 && num[4]==5)
    {
        cout<<"TT";
    }
    if(num[0]==8 && num[1]==8 && num[2]==0 && num[3]==1 && num[4]==9)
    {
        cout<<"BL";
    }
    if(num[0]==8 && num[1]==8 && num[2]==0 && num[3]==1 && num[4]==1)
    {
        cout<<"CC";
    }
    return 0;
}
