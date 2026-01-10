#include<stdio.h>

void count_digits(int x);

int main() {
    int y;
    scanf("%d", &y);
    count_digits(y);
    return 0;
}

void count_digits(int x) {
    int temp, count = 0;
    temp = x;
    while(temp > 0) {
        temp = temp / 10;
        count++;
    }
    printf("Total digits = %d\n", count);
}
