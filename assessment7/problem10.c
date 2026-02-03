#include<stdio.h>

void disp_2digit_odd_sum_tens7(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_2digit_odd_sum_tens7(y);
    return 0;
}

void disp_2digit_odd_sum_tens7(int x) {
    int i, sum = 0;
    for(i=70; i<=79; i++) {
        if(i%2 == 1) {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nSum = %d\n", sum);
}
