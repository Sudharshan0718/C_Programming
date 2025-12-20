#include<stdio.h>
int main(){
    int n, first_two, last_two;
    printf("Enter a number: ");
    scanf("%d",&n);
    first_two = n / 100;   
    last_two = n % 100;    
    if(first_two == last_two){
        printf("success\n");
    }
    else{
        printf("failure\n");
    }
    return 0;
}
