#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if((n/10)<(n%10)){
        printf("failure\n");
    }
    else{
        printf("success\n");
    }
    return 0;
}