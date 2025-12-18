#include <stdio.h>
int main() {
    int n;
    int hundreds_digit, ones_digit, mask;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    hundreds_digit = (n / 100) % 10;
    ones_digit = n % 10;
    mask = (hundreds_digit % 2) * (ones_digit % 2);  // 1 only if both odd
    n = n - mask * 500 - mask * 5;
    printf("Result: %d\n", n);
    return 0;
}


