#include <stdio.h>

int main(void) {
    int n, reverse_first_two, result, first_two;
    printf("Enter a 4 digit number: ");
    scanf("%d", &n);
    
    first_two = n / 100;
    reverse_first_two = (first_two % 10 * 10) + (first_two / 10);
    result = reverse_first_two * 100 + (n % 100);
    
    printf("Result: %d\n", result);
    return 0;
}

