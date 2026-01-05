#include<stdio.h>
int main()
{
    int n,sum,digit;
    sum = 0;
    printf("Enter an number : ");
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
        digit = n % 10;
        sum = sum + digit;
    }
    printf("%d",sum);
}