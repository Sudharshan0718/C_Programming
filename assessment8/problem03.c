#include<stdio.h>

int disp_2digit_ones5(int a) {
    int result = 0;
    for(int i = 15; i <= 95; i += 10) {
        result += i;
    }
    return result;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",disp_2digit_ones5(x));
}
