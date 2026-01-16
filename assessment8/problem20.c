#include<stdio.h>
int disp_LCM3(int,int,int);
int main()
{
    int w,x,y,z;
    scanf("%d",&w);
    scanf("%d",&x);
    scanf("%d",&y);
    z = disp_LCM3(w,x,y);
    printf("%d",z);
}
int disp_LCM3(int a,int b,int c)
{
    int lcm;
    lcm = (a<b)?a:b || (a<c)?a:c;
    while(1)
    {
        if((lcm % a == 0) && (lcm % b == 0) && (lcm % c == 0))
        {
           return(lcm);
        }
        lcm = lcm + 1;
    }
}