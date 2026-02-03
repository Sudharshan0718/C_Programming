#include<stdio.h>

void disp_2digit_odd_sum7(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_2digit_odd_sum7(y);
    return 0;
}

void disp_2digit_odd_sum7(int x) {
    int i, digit1, digit2;
    for(i=10; i<=99; i++) {
        if(i%2 == 1) { 
            digit1 = i/10;   
            digit2 = i%10;   
            if(digit1 + digit2 == 6) {
                printf("%d\n", i);
            }
        }
    }
}
