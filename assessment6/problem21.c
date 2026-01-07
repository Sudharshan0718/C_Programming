#include<stdio.h>
int main()
{
    int num, temp, digit, count;
    
    scanf("%d", &num);
    temp = num;
    count = 0;
    
    while(temp > 0)
    {
        digit = temp % 10;
        if(digit % 2 == 1)
            count++;
        temp = temp / 10;
    }
    
    printf("Total odd digits: %d", count);
    
    return 0;
}
