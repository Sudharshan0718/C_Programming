#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Result: %d\n", (n / 100)%10);
    return 0;
}