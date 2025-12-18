#include <stdio.h>

int main() {
    int n, first_two, last_two;
    scanf("%d", &n);
    first_two = n % 100; 
    last_two = n / 100;  
    last_two = (last_two % 10) * 10 + (last_two / 10);
    printf("%d\n", first_two + last_two * 100);
    return 0;
}



