#include<stdio.h>
int disp_interchange_first_last_digit(int a) {
    int n = a;
    int last = n % 10;
    int digits = 0;
    int temp = n;
    while(temp > 0) {
        digits++;
        temp = temp / 10;
    }
    int power = 1;
    for(int i = 1; i < digits; i++) {
        power *= 10;
    }
    int first = n / power;
    int result = a - first * power - last + last * power + first;
    return result;
}
int main() {
    int x;
    scanf("%d",&x);
    printf("%d",disp_interchange_first_last_digit(x));
}
