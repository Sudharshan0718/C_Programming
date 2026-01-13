#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int x,y;
    scanf("%d", &x);
    y = disp_interchange_first_last_digit(x);
    printf("%d",y);
}
int disp_interchange_first_last_digit(int a)
{
    int p,temp,first,result=0;
    p = 1;
    temp = a ;
    while(a > 10)
    {
        p = p * 10 ;
        a = a / 10 ;
    }
    first = a ;
    if(first % 2 == 0)
    {
        result = temp;
    }
    else
    {
        result = temp - p ;
    }
    return result;
}