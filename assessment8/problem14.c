
#include<stdio.h>
int disp_two_digit_square(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=disp_two_digit_square(x);
    printf("%d",y);
}
int disp_two_digit_square(int a)
{
    int digit,count;
    count = 0;
    while(a>10)
    {
        digit = a % 100;
        if((digit == 16) || (digit == 25) || (digit == 36) || (digit == 49) || (digit == 64) || (digit == 81))
        {
            count = count + 1;
        }
        a = a / 10;
    }
    return(count);
}
