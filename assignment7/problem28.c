#include<stdio.h>

void lcm_digit_sum14(int x);

int main() {
    int y;
    scanf("%d", &y);
    lcm_digit_sum14(y);
    return 0;
}

void lcm_digit_sum14(int x) {
    int i, lcm = 1, temp, dsum;
    
    for(i=1; i<100000; i++) {
        temp = i;
        dsum = 0;
        while(temp > 0) {
            dsum += temp % 10;
            temp /= 10;
        }
        if(dsum == 14) {
            lcm *= i;
        }
    }
    printf("LCM = %d\n", lcm);
}
