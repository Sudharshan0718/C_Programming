#include<stdio.h>
int main()
{
    int num1,num2,max,lcm;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    
    if(num1>num2)
        max=num1;
    else
        max=num2;
        
    for(;max>0;max++)
    {
        if(max%num1==0 && max%num2==0)
        {
            lcm=max;
            break;
        }
    }
    printf("%d",lcm);
}
