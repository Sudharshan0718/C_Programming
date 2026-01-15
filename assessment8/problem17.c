#include<stdio.h>
int disp_count_sum14(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=disp_count_sum14(x);
    printf("%d",y);
}
int disp_count_sum14(int a)
{
    int i,n,digit,sum,count = 0;
    i = a;
    while(i < 100000)
    {
        n = i;
        sum = 0;
        while(n > 0)
        {
            digit = n % 10 ;
            sum = sum + digit;
            n = n / 10;
        }
        if(sum == 14)
        {
            count = count + 1;
        }
        i = i + 1;
    }
    return(count);
}