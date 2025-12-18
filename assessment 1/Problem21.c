#include<stdio.h>
int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = n - (((n % 100) / 10) % 2 * 5);
    printf("Result: %d\n", result);
    return 0;
}
