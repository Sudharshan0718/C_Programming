#include<stdio.h>
int main()
{
    int num,digits,count;
    count = 0;
    printf("Enter an number : " );
    scanf("%d",&num);
    while(num>=10)
    {
        digits = num % 100;
        if(digits % 2 != 0)
        {
            count = count + 1 ;
        }
        num = num / 100;
    }
    printf("%d",count);
}
