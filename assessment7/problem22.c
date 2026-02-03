#include<stdio.h>

void disp_2digit_odd(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_2digit_odd(y);
    return 0;
}

void disp_2digit_odd(int x) {
    int count = 0, temp, d1, d2;
    temp = x;
    while(temp > 0) {
        d2 = temp % 10;
        d1 = (temp / 10) % 10;
        if(d1 % 2 == 1 && d2 % 2 == 1) {
            printf("%d%d ", d1, d2);
            count++;
        }
        temp = temp / 100;
    }
    printf("\nTotal = %d\n", count);
}
