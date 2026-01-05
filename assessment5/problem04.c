#include<stdio.h>
int main()
{
    int d,sum;
    sum=0;
    for(d=6;d>0;d--)
    {
        sum = sum + d;
    }
    printf("%d",sum);
}