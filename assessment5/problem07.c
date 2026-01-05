#include<stdio.h>
int main()
{
  int n,r,q,sum;
  sum = 0 ;
  for(n=10;n<100;n++)
  {
      q = n / 10;
      r = n % 10;
      sum = q + r;
      if((sum==7) && (n%2!=0))
      {
          printf("%d\n",n);
      }
  }
}