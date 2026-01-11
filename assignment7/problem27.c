#include<stdio.h>

void disp_digit_sum14(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_digit_sum14(y);
    return 0;
}

void disp_digit_sum14(int x) {
    int count = 0, i, dsum;
    
    for(i=1; i<100000; i++) {
        int temp = i;
        dsum = 0;
        while(temp > 0) {
            dsum += temp % 10;
            temp /= 10;
        }
        if(dsum == 14) {
            count++;
        }
    }
    printf("Total = %d\n", count);
}
