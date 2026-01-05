#include<stdio.h>
int main()
{
    int n,temp,first,last,mid,d,res;
    d=1;
    printf("Enter an number : ");
    scanf("%d",&n);
    temp = n ;
    last = n % 10;
    for(;n>10;n/=10)
    {
        d = d * 10;
    }
    first = n ;
    last = last * d;
    mid = (temp % d)/10;
    res = last + (mid * 10) + first;
    printf("%d",res);
}