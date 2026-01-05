#include<stdio.h>
int main()
{
    int num1,num2,min,hcf;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    
    if(num1<num2)
        min=num1;
    else
        min=num2;
        
    for(hcf=1;hcf<=min;hcf++)
    {
        if(num1%hcf==0 && num2%hcf==0)
        {
            hcf=hcf;
        }
    }
    printf("%d",hcf);
}
