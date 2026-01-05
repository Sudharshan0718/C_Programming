#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter an number : ");
    scanf("%d",&n);
    if(n<0){
        printf("Not Prime");
        goto end;
    }
    for(i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            printf("Not Prime");
            goto end;
        }
    }
    printf("Prime");
    end:
    return 0;
}