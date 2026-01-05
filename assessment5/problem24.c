#include<stdio.h>
int main()
{
    int num,digits,count;
    count = 0;
    printf("Enter an number : " );
    scanf("%d",&num);
    for(;num>0;num/=100)
    {
        digits = num % 100;
        if(digits==16 || digits==25 || digits==36 || digits==49 || digits==64 || digits==81)
        {
            count = count + 1 ;
        }
    }  
    printf("%d",count);
}
