#include<stdio.h>
int disp_biggest_4digit_div7_9(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y=disp_biggest_4digit_div7_9(x);
    printf("%d",y);
}
int disp_biggest_4digit_div7_9(int a)
{
    for(;a>=1000;a--)
    {
        if((a % 7 == 0) && (a % 9 == 0))
        {
            return(a);
        }
    }
}