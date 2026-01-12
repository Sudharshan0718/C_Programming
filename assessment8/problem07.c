#include<stdio.h>

int disp_reverse_num(int a) {
    int n = a;
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",disp_reverse_num(x));
}
