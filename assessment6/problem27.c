#include<stdio.h>
int main()
{
    int count = 0, i, temp, digit, sum;
    
    for(i = 1; i < 100000; i++)
    {
        temp = i;
        sum = 0;
        
        while(temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }
        
        if(sum == 14)
            count++;
    }
    
    printf("Total count: %d", count);
    return 0;
}
