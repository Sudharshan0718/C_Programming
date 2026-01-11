#include<stdio.h>

void disp_single_perfect_square(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_single_perfect_square(y);
    return 0;
}

void disp_single_perfect_square(int x) {
    int count = 0, digit;
    while(x > 0) {
        digit = x % 10;
        if(digit == 1 || digit == 4 || digit == 9) {  // 1²=1, 2²=4, 3²=9
            printf("%d ", digit);
            count++;
        }
        x = x / 10;
    }
    printf(" %d\n", count);
}
