#include<stdio.h>
int main(){
    int n,result;
    printf("enter a number:");
    scanf("%d",&n);
    result=((n/10)<=(n%10))?0:1;
    printf("%d",result);
    return 0;
}