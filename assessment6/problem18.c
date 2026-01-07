#include<stdio.h>
int main()
{
    int num, first_two, i, flag;
    
    scanf("%d", &num);
    while(num >= 100)
        num = num / 10;
    first_two = num;
    flag = 0;
    i = 2;
    while(i <= first_two/2)
    {
        if(first_two % i == 0)
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
