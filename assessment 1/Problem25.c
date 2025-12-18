#include <stdio.h>

int main() {
    int n, d1, d2, d3, sum;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    
    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;
    sum = d1 + d2 + d3;
    
    printf("Result: %d\n", (sum / 10) + (sum % 10));
    return 0;
}
