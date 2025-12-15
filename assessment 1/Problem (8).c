#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Result: %d\n", n % 10);
    return 0;
}