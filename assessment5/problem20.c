#include<stdio.h>
int main()
{
    int num,i,count;
    count = 0;
    for(i=2;i<10;i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
        {
            count = count + 1;
        }
    }
    printf("%d",count);
}