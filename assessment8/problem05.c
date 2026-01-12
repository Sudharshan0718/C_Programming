#include<stdio.h>

int count_digits(int a) {
    int n = a;
    int count = 0;
    while(n > 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",count_digits(x));
}
