#include<stdio.h>

int disp_sum(int i) {
    int result = 0;
    for(int j = 1; j <= i; j++) {
        result += j;
    }
    return result;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", sum(x));
    return 0;
}
