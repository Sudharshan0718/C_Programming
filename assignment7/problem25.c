#include<stdio.h>

void disp_single_digit_primes(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_single_digit_primes(y);
    return 0;
}

void disp_single_digit_primes(int x) {
    int count = 0, digit;
    while(x > 0) {
        digit = x % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            printf("%d ", digit);
            count++;
        }
        x = x / 10;
    }
    printf("\nTotal = %d\n", count);
}
