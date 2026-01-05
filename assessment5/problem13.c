#include<stdio.h>
int main()
{
    int n,rev,digit;
    rev = 0;
    printf("Enter an number : ");
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
        digit = n % 10;
        rev = (rev * 10 ) + digit;
    }
    printf("%d",rev);
}