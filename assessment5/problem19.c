#include<stdio.h>
int main()
{
    int num,i,digits;
    printf("Enter an 4- digit number : ");
    scanf("%d",&num);
    digits = (num % 1000)/10 ;
    if(digits<0)
    {
        printf("Not Prime");
        goto end;
    }
    for(i=2;i<digits;i++)
    {
        if(digits % i == 0)
        {
            printf("Not Prime");
            goto end;
        }
    }
    printf("Prime");
    end:
    return 0;
}