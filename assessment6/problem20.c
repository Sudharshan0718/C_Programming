#include<stdio.h>
int main()
{
    int count = 0, i, j, flag;
    for(i = 0; i <= 9; i++)
    {
        flag = 0;
        if(i < 2) continue;
        j = 2;
        while(j <= i/2)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
            j++;
        }
        
        if(flag == 0)
            count++;
    }
    
    printf("Total single digit primes: %d", count);
    
    return 0;
}
