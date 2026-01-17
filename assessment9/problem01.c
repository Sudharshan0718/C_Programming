#include<stdio.h>
int main()
{
    int a[5],i,sum;
    sum = 0 ;
    printf("Enter 5 numbers:\n");
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("%d",sum);
}