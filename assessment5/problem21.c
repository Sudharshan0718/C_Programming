#include<stdio.h>
int main()
{
    int num,digits,count;
    count = 0;
    printf("Enter an number : " );
    scanf("%d",&num);
    for(;num>0;num/=10)
    {
        digits = num % 10;
        if(digits % 2 != 0)
        {
            count = count + 1 ;
        }
    }  
    printf("%d",count);
}