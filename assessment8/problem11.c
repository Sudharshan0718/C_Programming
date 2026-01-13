#include<stdio.h>
int disp_total_odd_digits(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=disp_total_odd_digits(x);
    printf("%d",y);
}
int disp_total_odd_digits(int a)
{
    int digit,count;
    count = 0;
    while(a>0)
    {
        digit = a % 10;
        if(digit % 2 != 0)
        {
            count = count + 1;
        }
        a = a / 10;
    }
    return(count);
}