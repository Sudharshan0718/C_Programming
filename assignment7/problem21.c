#include<stdio.h>

void disp_total_odd_digits(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_total_odd_digits(y);
    return 0;
}

void disp_total_odd_digits(int x) {
    int count = 0, digit;
    while(x > 0) {
        digit = x % 10;
        if(digit % 2 == 1) {
            count++;
        }
        x = x / 10;
    }
    printf(" %d\n", count);
}
