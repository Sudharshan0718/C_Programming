#include<stdio.h>
int main()
{
    int num,last,first,power,count,temp,result;
    printf("Enter an number : ");
    scanf("%d",&num);
    
    last=num%10;
    count=0;
    temp=num;
    while(temp>0)
    {
        count=count+1;
        temp=temp/10;
    }
    
    power=1;
    count=count-1;
    while(count>0)
    {
        power=power*10;
        count=count-1;
    }
    first=num/power;
    
    result=num-last-first*power+last*power+first;
    printf("%d",result);
}
