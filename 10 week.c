#include<iostream>

using namespace std;
class Bits{
int a;
public:
    Bits()
    {
        a=1;
    }
    Bits(int a1)
    {
        a=a1;
    }

      friend ostream &operator<<( ostream &output, const Bits &D ) {
         output <<D.a;
         return output;
      }

      friend istream &operator>>( istream  &input, Bits &D ) {
         input >> D.a;
         return input;
      }
      bool operator &(Bits q);
      bool operator |(Bits q);
      bool operator ^(Bits q);
      bool operator !();
};

bool Bits :: operator &(Bits q)
{
  Bits d;
 d.a=a&q.a;
 if(d.a==1)
    return true;
 else return false;
}
bool Bits ::operator |(Bits q)
{
  Bits d;
 d.a=a|q.a;
 if(d.a==1)
    return true;
 else return false;
}
bool Bits :: operator ^(Bits q)
{
  Bits d;
 d.a=a^q.a;
 if(d.a==1)
    return true;
 else return false;
}
bool Bits :: operator !()
{
  Bits d;
 d.a=!a;
 if(d.a==1)
    return true;
 else return false;
}
int main(){

    Bits b1,b2;
    cin>>b1;
    cin>>b2;

Bits b3 = b1&b2;
cout << "AND \t" << b3 << endl;

Bits b4 = !(b1&b2);
cout << "NAND \t" << b4 << endl;

Bits b5 = b1|b2;
cout << "OR \t" << b5 << endl;

Bits b6 =!(b1|b2);
cout << "NOR \t" << b6 << endl;

Bits b7 = b1^b2;
cout << "XOR \t" << b7 << endl;

Bits b8 = (b1^b2) ;
cout << "XNOR \t" << b8 << endl;

Bits b9 = !b2;
cout << "NOT \t" << b9 << endl;
return 0;
}
