#include <stdio.h>

int main() {
    int n, tens_digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    tens_digit = (n / 10) % 10;
    printf("Result: %d\n", n - (tens_digit % 2 * 5));
    return 0;
}
