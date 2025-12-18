#include <stdio.h>

int main() {
    int n;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    printf("Result: %d\n", n - ((n / 10) % 10) * 10);
    return 0;
}
