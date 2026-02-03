#include<stdio.h>

void disp_biggest_4digit(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_biggest_4digit(y);
    return 0;
}

void disp_biggest_4digit(int x) {
    int i;
    for(i=9999; i>=1000; i--) {
        if(i%7 == 0 && i%9 == 0) {
            printf("%d\n", i);
            break;
        }
    }
}
