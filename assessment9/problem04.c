#include<stdio.h>
int main()
{
    int a[5],i,big;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    big = a[0];
    for(i = 1; i < 5; i++) {
        if(big<a[i])
        {
            big = a[i];
        }
    }
    printf("%d",big);
}