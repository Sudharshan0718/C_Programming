#include<stdio.h>
int main()
{
    int num, temp, digit, sum, i, flag;
    
    scanf("%d", &num);
    temp = num;
    sum = 0;
    
    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
    
    flag = 0;
    i = 2;
    while(i <= num/2)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    
    if(flag == 0 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if(flag == 0)
        printf("Prime but sum of digits is not 14");
    else
        printf("Not prime & sum of digits is not 14");
    
    return 0;
}
