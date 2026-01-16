#include<stdio.h>
int disp_LCM2(int,int);
int main()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    z = disp_LCM2(x,y);
    printf("%d",z);
}
int disp_LCM2(int a,int b)
{
    int lcm;
    lcm = (a<b)?a:b;
    while(1)
    {
        if((lcm % a == 0) && (lcm % b == 0))
        {
           return(lcm);
        }
        lcm = lcm + 1;
    }
}