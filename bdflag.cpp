#include<bits/stdc++.h>
void main()
{
int driver = DETECT, mode=0;
initgraph (&driver, &mode, "..\\bgi");
delay(1000);
printf ("\n\n\n\t\t\t National Flag of Bangladesh");
printf("\n\t\t\t Programmed by Mohammad Lukman Hussain");
delay(1000);

setcolor(2); /* Flag's Rectangle */
//rectangle(200, 150, 450, 300);
rectangle(200,150,400,250);
setfillstyle(1,2);
floodfill(325,225,2);
delay(1000);

setcolor(4); /* Flag's Circle */
//circle(325,225,50);
circle(300,200,30);
setfillstyle(1,4);
floodfill(300,200,4);
delay(1000);

setcolor(3); /* Flag's Stand */
rectangle(190,150,200,400);
setfillstyle(1,5);
floodfill(190,350,3);
delay(1000);

setcolor(3); /* Ground Stand */
rectangle(180,400,210,410);
rectangle(170,410,220,420);
rectangle(160,420,230,430);
delay(1000);

getch();
}
