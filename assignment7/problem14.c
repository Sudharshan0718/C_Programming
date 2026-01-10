#include<stdio.h>

void disp_interchange_first_last_digit(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_interchange_first_last_digit(y);
    return 0;
}

void disp_interchange_first_last_digit(int x) {
    int first, last, temp, digits = 0, power = 1;
    last = x % 10;
    temp = x;
    while(temp > 0) {
        temp = temp / 10;
        digits++;
    }
    
    first = x / power;
    for(int i = 1; i < digits; i++) {
        power *= 10;
    }
    first = x / power;
    
    int result = x - (first * power) - last + (last * power) + first;
    printf("%d\n", result);
}
