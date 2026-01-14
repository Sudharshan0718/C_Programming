#include<stdio.h>
int disp_total_2digit_odd(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=disp_total_2digit_odd(x);
    printf("%d",y);
}
int disp_total_2digit_odd(int a)
{
    int digit,count;
    count = 0;
    while(a>10)
    {
        digit = a % 100;
        if(digit % 2 != 0)
        {
            count = count + 1;
        }
        a = a / 10;
    }
    return(count);
}