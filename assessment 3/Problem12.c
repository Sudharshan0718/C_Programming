#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if((n/10)>=(n%10)){
        printf("success\n");
    }
    else{
        printf("failure\n");
    }
    return 0;
}