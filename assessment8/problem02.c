#include<stdio.h>

int disp_rsum(int i) {
    int result = 0;
    for(int j = 6; j >= 1; j--) {
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
