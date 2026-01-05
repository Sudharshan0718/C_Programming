#include<stdio.h>
int main(){
    int n,count;
    count = 0;
    printf("Enter an number : " );
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
        count = count + 1;
    }
    printf("%d",count);
}