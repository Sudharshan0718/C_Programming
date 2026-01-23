#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int rev_a, rev_b, rev_c, rev_d, rev_e;
    int sum = 0;
    
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    // Reverse each number's digits
    rev_a = 0;
    int temp_a = a;
    while (temp_a > 0) {
        rev_a = rev_a * 10 + temp_a % 10;
        temp_a /= 10;
    }
    sum += rev_a;
    
    rev_b = 0;
    int temp_b = b;
    while (temp_b > 0) {
        rev_b = rev_b * 10 + temp_b % 10;
        temp_b /= 10;
    }
    sum += rev_b;
    
    rev_c = 0;
    int temp_c = c;
    while (temp_c > 0) {
        rev_c = rev_c * 10 + temp_c % 10;
        temp_c /= 10;
    }
    sum += rev_c;
    
    rev_d = 0;
    int temp_d = d;
    while (temp_d > 0) {
        rev_d = rev_d * 10 + temp_d % 10;
        temp_d /= 10;
    }
    sum += rev_d;
    
    rev_e = 0;
    int temp_e = e;
    while (temp_e > 0) {
        rev_e = rev_e * 10 + temp_e % 10;
        temp_e /= 10;
    }
    sum += rev_e;
    
    printf("Reversed numbers: %d %d %d %d %d\n", rev_a, rev_b, rev_c, rev_d, rev_e);
    printf("Sum of reversed numbers: %d\n", sum);
    
    return 0;
}
