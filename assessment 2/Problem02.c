#include<stdio.h>
int main(){
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=(n=50)?0:1;
    printf("%d",result);
    return 0;
}
