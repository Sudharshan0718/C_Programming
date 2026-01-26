#include <stdio.h>
int main()
{
    int num, rev = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(num > 0) 
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    while(rev > 0) 
    {
        digit = rev % 10;
        printf("%c\n", digit + '0');
        rev = rev / 10;
    }
}
