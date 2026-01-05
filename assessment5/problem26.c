#include<stdio.h>
int main()
{
    int num;
    for(num=9999;num>=1000;num--)
    {
        if(num%7==0 && num%9==0)
        {
            printf("%d",num);
            break;
        }
    }
    return 0;
}
