#include<stdio.h>

void disp_2digit_odd_below20(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_2digit_odd_below20(y);
    return 0;
}

void disp_2digit_odd_below20(int x) {
    int i;
    for(i=11; i<=x; i++) {
        if(i%2 == 1) {
            printf("%d\n", i);
    }
}
}