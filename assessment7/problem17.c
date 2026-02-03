#include<stdio.h>

void check_prime_and_sum14(int x);

int main() {
    int y;
    scanf("%d", &y);
    check_prime_and_sum14(y);
    return 0;
}

void check_prime_and_sum14(int x) {
    int i, flag = 0, digit_sum = 0, temp = x;
    
    if(x > 1) {
        for(i=2; i<=x/2; i++) {
            if(x % i == 0) {
                flag = 1;
                break;
            }
        }
    }
    
    while(temp > 0) {
        digit_sum += temp % 10;
        temp /= 10;
    }
    
    if(flag == 0 && digit_sum == 14) {
        printf("Prime & sum of digits is 14\n");
    }
    else if(flag == 0 && digit_sum != 14) {
        printf("Prime & sum of digits is not 14\n");
    }
    else if(flag == 1 && digit_sum != 14) {
        printf("Not prime & sum of digits is not 14\n");
    }
}
