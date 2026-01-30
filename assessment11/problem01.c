#include <stdio.h>
int main() 
{
    int num;
    int *ptr;
    printf("Enter a number:");
    scanf("%d",&num);
    ptr = &num;
    printf("Original value: %d\n", num);
    *ptr = *ptr + 10;
    printf("Changed value: %d\n", num);
}