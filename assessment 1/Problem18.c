#include<stdio.h>
int main() {
    int n, result;
    printf("Enter a 2 digit number: ");
    scanf("%d", &n);
    
    result = 10 + (n % 10);
    
    printf("Result: %d\n", result);
    return 0;
}