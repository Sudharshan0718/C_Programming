#include<stdio.h>

void disp_2digit_perfect_square(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_2digit_perfect_square(y);
    return 0;
}

void disp_2digit_perfect_square(int x) {
    int count = 0, temp, d1, d2, num;
    temp = x;
    while(temp >= 10) {
        d1 = (temp / 10) % 10;
        d2 = temp % 10;
        num = d1 * 10 + d2;
        if(num == 16 || num == 25 || num == 36 || num == 49 || 
           num == 64 || num == 81) {
            printf("%d ", num);
            count++;
        }
        temp = temp / 100;
    }
    printf("%d\n", count);
}
