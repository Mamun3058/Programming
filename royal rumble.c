#include<stdio.h>

long factorial(int);

int main()
{
  int n;
  long f;
  scanf("%d", &n);
  if(n>0)
  {
    f = factorial(n);
    printf("%ld\n", f);
  }

  return 0;
}

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
