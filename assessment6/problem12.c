#include<stdio.h>
int main()
{
    int num,digits,sum;
    sum=0;
    printf("Enter an number : ");
    scanf("%d",&num);
    while(num>0)
    {
        if(num>0)
        {
            digits=num%10;
            sum=sum+digits;
            num=num/10;
        }
    }
    printf("%d",sum);
}
