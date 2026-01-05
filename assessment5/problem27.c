#include<stdio.h>
int main()
{
    int i,sum,count;
    count = 0;
    for(i=1;i<100000;i++)
    {
        sum = 0;
        int temp = i;
        while(temp>0)
        {
            sum = sum + temp%10;
            temp = temp/10;
        }
        if(sum==14)
        {
            count = count + 1;
        }
    }
    printf("%d",count);
}
