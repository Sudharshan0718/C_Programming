#include<stdio.h>

void disp_assend(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_assend(y);
    return 0;
}

void disp_assend(int x) {
    int i;
    for(i=5; i>=x; i--) {
        printf("%d\n", i);
    }
}
