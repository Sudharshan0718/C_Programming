#include<stdio.h>
int main()
{
    int n,temp,first,result,d;
    d = 1;
    result = 0;
    printf("Enter an number : ");
    scanf("%d",&n);
    temp = n ;
    for(;n>=10;n/=10)
    {
        d = d * 10;
    }
    first = n;
    if(first % 2 != 0)
    {
        result = temp - d;
    }
    if(first % 2 == 0)
    {
        result = temp;
    }
    printf("%d",result);
}