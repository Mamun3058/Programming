#include<stdio.h>
int main()
{
   int second,mintue,hour;
   scanf("%d",&second);

   mintue=second/60;

   second=second%60;

   hour=mintue/60;

   mintue=mintue%60;

   printf("%d:%d:%d",hour,mintue,second);

   return 0;

}
