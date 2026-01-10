#include<stdio.h>

void check_first_2digit_prime(int x);

int main() {
    int y;
    scanf("%d", &y);
    check_first_2digit_prime(y);
    return 0;
}

void check_first_2digit_prime(int x) {
    int tens = (x / 10) % 10;
    int ones = x % 10;
    int i, t_prime = 1, o_prime = 1;
    
    if(tens > 1) {
        for(i=2; i<=tens/2; i++) {
            if(tens % i == 0) {
                t_prime = 0;
                break;
            }
        }
    }
    
    
    if(ones > 1) {
        for(i=2; i<=ones/2; i++) {
            if(ones % i == 0) {
                o_prime = 0;
                break;
            }
        }
    }
    
    if(t_prime && o_prime) {
        printf("prime\n");
    }
    else {
        printf("Not prime\n");
    }
}
