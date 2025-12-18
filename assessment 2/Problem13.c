#include <stdio.h>
int main() {
    int n, result;
    printf("enter a four digit number:");
    scanf("%d", &n);
    result = (((n / 10) % 10) == (n % 10)) ? 1 : 0;
    printf("%d", result);
    return 0;
}
