#include<stdio.h>

void disp_2digit_odd_sum5(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_2digit_odd_sum5(y);
    return 0;
}

void disp_2digit_odd_sum5(int x) {
    int i, sum = 0;
    for(i=10; i<=99; i++) {
        if(i%10 == 5) {
            printf("%d ", i);
            sum = sum + i;
        }
    }
    printf("\nSum = %d\n", sum);
}
