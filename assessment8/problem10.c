#include<stdio.h>
int disp_2digit_even_sum6(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=disp_2digit_even_sum6(x);
    printf("%d",y);
}
int disp_2digit_even_sum6(int a)
{
    int count;
    count = 0;
    while(a<=10)
    {
        if((a == 2) || (a == 3) || (a == 5) || (a == 7))
        {
            count = count + 1;
        }
        a = a + 1;
    }
    return(count);
}