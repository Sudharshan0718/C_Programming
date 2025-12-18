#include <stdio.h>

int main() {
    int n, first_two, last_two;
    scanf("%d", &n);
    first_two = (n / 100);
    last_two = n % 100;
    first_two = (first_two % 10) * 10 + (first_two / 10);
    printf("%d\n", first_two * 100 + last_two);
    return 0;
}
