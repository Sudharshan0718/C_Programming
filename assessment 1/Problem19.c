#include<stdio.h>
int main() {
    int n, result;
    printf("Enter a 2 digit number: ");
    scanf("%d", &n);
    
    result = (n / 10)*10+2;
    
    printf("Result: %d\n", result);
    return 0;
}