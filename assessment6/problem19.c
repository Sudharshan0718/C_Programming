#include<stdio.h>
int main()
{
    int num, temp, middle_two, i, flag;
    
    scanf("%d", &num);
    temp = num;
    temp = temp / 10;
    middle_two = temp % 100;
    
    flag = 0;
    i = 2;
    while(i <= middle_two/2)
    {
        if(middle_two % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
        printf("prime");
    else
        printf("not prime");
    
    return 0;
}

