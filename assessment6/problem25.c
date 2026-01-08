#include<stdio.h>
int main()
{
    int num, temp, digit, count, i, flag;
    
    scanf("%d", &num);
    temp = num;
    count = 0;
    
    while(temp > 0)
    {
        digit = temp % 10;
        
        // Check if single digit is prime (2,3,5,7)
        flag = 0;
        if(digit >= 2)
        {
            i = 2;
            while(i <= digit/2)
            {
                if(digit % i == 0)
                {
                    flag = 1;
                    break;
                }
                i++;
            }
        }
        
        if(flag == 0 && digit >= 2)
            count++;
            
        temp = temp / 10;
    }
    
    printf("Total single digit primes: %d", count);
    return 0;
}
