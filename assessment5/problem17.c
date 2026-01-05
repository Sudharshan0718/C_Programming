#include<stdio.h>
int main()
{
    int num,i,count = 0;
    int digit,sum = 0;
    printf("Enter an number : ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num % i == 0)
        {
            count = 1;
            break;
        }
    }
    for(;num>10;num/=10)
    {
        digit = num % 10 ;
        sum = sum + digit;
    }
    if(count == 0 && sum == 14)
    {
        printf("Prime & sum of digits is 14");
    }
    if(count != 0 && sum == 14)
    {
         printf(" Not Prime but sum of digits is 14");
    }
    if(count == 0 && sum != 14)
    {
         printf("Prime & sum of digits is not 14");
    }
    if(count != 0 && sum != 14)
    {
        printf("Not Prime & sum of digits is not 14");
    }
    return 0;
}