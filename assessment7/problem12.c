#include<stdio.h>

void disp_sum_all_digits(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_sum_digits(y);
    return 0;
}

void disp_sum_all_digits(int x) {
    int sum = 0;
    while(x > 0) {
        sum = sum + x % 10;
        x = x / 10;
    }
    printf("%d\n", sum);
}
