#include<iostream>
using namespace std;
class student {
	int id;
	public:
	 student(int i) {
	   id = i;
	   cout << “Constructing ”<<id;
	 }
	 ~student(){
	    cout << “Destructing ”<<id;
      }
	  int getId() {return id;}
};
student func(){
	student tempSt(5);
	return tempSt;
}
int main(){
	student st;
	st = func();
	cout << st.getId();
}
