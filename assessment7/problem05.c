#include<stdio.h>

void disp_odd(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_odd(y);
    return 0;
}

void disp_odd(int x) {
    int i;
    for(i=1; i<=x; i++) {
        if(i%2 == 1) {
            printf("%d\n", i);
    }
}
}