#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);
    printf("Result: %d\n", (n % 10)+(n / 10 % 10)+(n / 100) );
    return 0;
}