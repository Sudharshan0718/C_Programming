#include<stdio.h>
int main()
{
    int num,count;
    count=0;
    printf("Enter an number : ");
    scanf("%d",&num);
    while(num>0)
    {
        if(num>0)
        {
            count=count+1;
            num=num/10;
        }
    }
    printf("%d",count);
}
