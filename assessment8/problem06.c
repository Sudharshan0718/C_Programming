#include<stdio.h>

int sum_digits(int a) {
    int n = a;
    int sum = 0;
    while(n > 0) {
        sum += n % 10; 
        n = n / 10;   
    }
    return sum;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",sum_digits(x));
}
