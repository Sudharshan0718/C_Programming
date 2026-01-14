#include<stdio.h>
int disp_single_digit_square(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=disp_single_digit_square(x);
    printf("%d",y);
}
int disp_single_digit_square(int a)
{
    int digit,count;
    count = 0;
    while(a>0)
    {
        digit = a % 10;
        if((digit == 1) || (digit == 4) || (digit == 9))
        {
            count = count + 1;
        }
        a = a / 10;
    }
    return(count);
}