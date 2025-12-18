#include <stdio.h>

int main() {
    int n, d0, d1, d2, sum, result;
    printf("Enter 3 digit number: ");
    scanf("%d", &n);
    d0 = n % 10;
    d1 = (n / 10) % 10;    
    d2 = n / 100;
    sum = d0 + d1 + d2;
    result = sum;
    printf("Result: %d\n", result);
    return 0;
}
