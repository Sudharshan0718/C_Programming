#include<stdio.h>
int main(){
    int num, count;
    count = 0;

    printf("Enter a number : ");
    scanf("%d",&num);

    if(num == 0)
    {
        count = 1;
    }

Loop1:
    if(num != 0)
    {
        num = num / 10;
        count = count + 1;
        goto Loop1;
    }

    printf("%d",count);
    return 0;
}
