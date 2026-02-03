#include<stdio.h>

void hcf_digit_sum14(int x);

int main() {
    int y;
    scanf("%d", &y);
    hcf_digit_sum14(y);
    return 0;
}

void hcf_digit_sum14(int x) {
    int hcf = 0, i, temp, dsum;
    
    for(i=1; i<100000; i++) {
        temp = i;
        dsum = 0;
        while(temp > 0) {
            dsum += temp % 10;
            temp /= 10;
        }
        if(dsum == 14) {
            if(hcf == 0) {
                hcf = i;
            }
            else {
                while(hcf != i) {
                    if(hcf > i) hcf -= i;
                    else i -= hcf;
                }
                hcf = hcf;
            }
        }
    }
    printf("HCF = %d\n", hcf);
}
