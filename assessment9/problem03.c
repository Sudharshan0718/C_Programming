#include<stdio.h>
int main()
{
    int a[5],i,small;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    small = a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]<small)
        {
            small = a[i];
        }
    }
    printf("%d",small);
}