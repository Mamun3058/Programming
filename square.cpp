#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;

    while(cin >> a >> b && a!=0 && b!=0)
        {

        int c = 0;
        for(int i = a; i <= b; i++)
            {

            int temp = sqrt(i);
            if(i == pow(temp,2))
            {
                 c++;
            }

        }
        cout << c<< endl;
    }
    return 0;
}
