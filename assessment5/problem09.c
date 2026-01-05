#include<stdio.h>
int main()
{
    int d,r,sum;
    sum = 0;
    for(d=10;d<=99;d++)
    {
       r = d % 10;
       if(r == 5)
       {
           sum = sum + d ;
       }
    }
    printf("%d",sum);
}