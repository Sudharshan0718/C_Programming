#include<stdio.h>

void disp_sum(int x);

int main() {
    int y;
    scanf("%d", &y);
    disp_sum(y);
    return 0;
}

void disp_sum(int x) {
    int i,sum = 0;
    for(i=1; i<=x; i++) {
       sum = sum + i;
    }
    printf("%d\n",sum);
}
