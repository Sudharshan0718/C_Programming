#include<stdio.h>
int main()
{
    int num, temp, two_digit, count;
    printf("enter a 4 digit number :");
    scanf("%d", &num);
    temp = num;
    count = 0;
    while(temp >= 10)
    {
        two_digit = temp % 100;    
        if(two_digit % 2 == 1)      
            count++;
        temp = temp / 10;           
    }
    
    printf("Total two digit odd numbers: %d", count);
    return 0;
}
