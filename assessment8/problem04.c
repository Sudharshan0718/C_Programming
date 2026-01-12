#include<stdio.h>

int disp_2digit_odd_sum_tens7(int a) {
    int result = 0;
    for(int i = 71; i <= 79; i += 2) {
        result += i;
    }
    return result;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",disp_2digit_odd_sum_tens7(x));
}
