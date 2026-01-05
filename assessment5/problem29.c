#include<stdio.h>
int main()
{
    int num1,num2,num3,max,lcm;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    if(num1>num2 && num1>num3)
        max=num1;
    else if(num2>num3)
        max=num2;
    else
        max=num3;
        
    for(;max>0;max++)
    {
        if(max%num1==0 && max%num2==0 && max%num3==0)
        {
            lcm=max;
            break;
        }
    }
    printf("%d",lcm);
}
