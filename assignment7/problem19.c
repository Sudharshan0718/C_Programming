#include<stdio.h>

void check_ht_prime(int x);

int main() {
    int y;
    scanf("%d", &y);
    check_ht_prime(y);
    return 0;
}

void check_ht_prime(int x) {
    int h = x / 100;
    int t = (x / 10) % 10;
    
    if( (h==2 || h==3 || h==5 || h==7) && (t==2 || t==3 || t==5 || t==7) ) {
        printf("prime\n");
    }
    else {
        printf("Not prime\n");
    }
}
