#include<stdio.h>

void disp_reverse_digits(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_reverse_digits(y);
    return 0;
}

void disp_reverse_digits(int x) {
    int rev = 0;
    while(x > 0) {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    printf("%d\n", rev);
}
