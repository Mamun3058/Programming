#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
void Weekday(char[10],int&);
using namespace std;
int main ()

{
int year, month, leapsum;
int days;
int firstday, fday;
char startday [10];




cout<<"Please enter the number of the month and year to access calendar\n"<<endl;

cout<< "Please leave a space in between the month and year when you enter them: \n";

cin>>month>>year;

firstday=(((year-1)*365)+4*((year-1)/4)-4*((year-1)/100)+4*((year-1)/400)+1)%7;

leapsum=(!(year%4)&&(year%100))||!(year%400);


system("cls");

Weekday(startday,fday);

switch (month)
{case 1:
month;
{if (leapsum=0)
days=31;
else
days=31;}

cout<<"January"<<" "<<startday<<" "<<year;
break;

case 2:
month;
{if (leapsum=0)
days=29;
else
days=28;}

cout<<"February"<<" "<<startday<<" "<<year;
break;

case 3:
month;
{if (leapsum=0)
days=31;
else
days=31;}

cout<<"March"<<" "<<startday<<" "<<year;
break;
case 4:
month;
{if (leapsum=0)
days=30;
else
days=30;}

cout<<"April"<<" "<<startday<<" "<<year;
break;

case 5:
month;
{if (leapsum=0)
days=31;
else
days=31;}

cout<<"May"<<" "<<startday<<" "<<year;
break;

case 6:
month;
{if (leapsum=0)
days=30;
else
days=30;}

cout<<"June"<<" "<<startday<<" "<<year;
break;

case 7:
month;
{if (leapsum=0)
days=31;
else
days=31;}

cout<<"July"<<" "<<startday<<" "<<year;
break;

case 8:
month;
{if (leapsum=0)
days=31;
else
days=31;}

cout<<"August"<<" "<<startday<<" "<<year;
break;

case 9:
month;
{if (leapsum=0)
days=30;
else
days=30;}

cout<<"September"<<" "<<startday<<" "<<year;
break;

case 10:
month;
{if (leapsum=0)
days=31;
else
days=31;}

cout<<"October"<<" "<<startday<<" "<<year;
break;

case 11:
month;
{if (leapsum=0)
days=30;
else
days=30;}

cout<<"November"<<" "<<startday<<" "<<year;
break;

case 12:
{if (leapsum=0)
days=31;
else
days=31;}
month;

cout<<"December"<<" "<<startday<<" "<<year;
break;

default:
cout<<"Please restart program and enter correct month and year";
}

fday=firstday;

return 0;

}
void Weekday(char startday[10], int& fday)
{
switch (fday)


{ case 1:
{if(fday==1)
cout<< "Monday";}
break;

case 2:
{if (fday==2)
cout<< "Tuesday";}
break;

case 3:
{if(fday==3)
cout<< "Wednesday";}
break;

case 4:
{if (fday==4)
cout<< "Thursday";}
break;

case 5:
{if (fday==5)
cout<< "Friday";}
break;

case 6:
{if (fday==6)
cout<< "Saturday";}
break;

case 7:
{if (fday==0)
cout<< "Sunday";}
break;

}




}
