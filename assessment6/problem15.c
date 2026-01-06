#include<stdio.h>
int main()
{
    int num,last,result;
    printf("Enter an number : ");
    scanf("%d",&num);
    
    last=num%10;
    result=num;
    num=1;
    while(num>0)
    {
        if(last%2!=0)
        {
            result=result-1;
        }
        num=num-1;
    }
    printf("%d",result);
}
