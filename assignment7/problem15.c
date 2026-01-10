#include<stdio.h>

void check_last_digit_odd(int x);

int main() {
    int y;
    scanf("%d", &y);
    check_last_digit_odd(y);
    return 0;
}

void check_last_digit_odd(int x) {
    int last_digit = x % 10;
    
    if(last_digit % 2 == 0) {
        printf("%d\n", x);
    }
    else {
        printf("%d\n", x - 1);
    }
}
