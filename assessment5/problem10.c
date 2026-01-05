#include<stdio.h>
int main()
{
    int d,q,sum;
    sum = 0;
    for(d=10;d<=99;d++)
    {
       q = d / 10;
       if((d % 2 != 0) && (q == 7))
       {
           sum = sum + d ;
       }
    }
    printf("%d",sum);
}