#include<stdio.h>

void disp_2digit_even_sum6(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_2digit_even_sum6(y);
    return 0;
}

void disp_2digit_even_sum6(int x) {
    int i, d1, d2, count = 0;
    for(i=10; i<=99; i++) {
        d1 = i / 10;
        d2 = i % 10;
        if(d1 + d2 == 6 && i%2 == 0) {
            count++;
        }
    }
    printf("%d\n", count);
}
