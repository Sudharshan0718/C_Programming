#include<stdio.h>
int disp_single_digit_prime(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=disp_single_digit_prime(x);
    printf("%d",y);
}
int disp_single_digit_prime(int a)
{
    int digit,count;
    count = 0;
    while(a>10)
    {
        digit = a % 10;
        if((digit == 2) || (digit == 3) || (digit == 5) || (digit == 7))
        {
            count = count + 1;
        }
        a = a / 10;
    }
    return(count);
}