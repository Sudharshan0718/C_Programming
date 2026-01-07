#include<stdio.h>
int main()
{
    int num,i,flag;
    flag=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    i=2;
    while(i<=num/2)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
        i=i+1;
    }
    
    if(flag==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
