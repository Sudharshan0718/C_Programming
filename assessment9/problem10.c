#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int non1, non2, non3, non4, non5;
    int non_count = 0;
    
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a <= 1 || (a % 2 == 0 && a != 2) || (a % 3 == 0) || (a % 5 == 0) || (a % 7 == 0)) {
        non1 = a; non_count++;
    }
    if (b <= 1 || (b % 2 == 0 && b != 2) || (b % 3 == 0) || (b % 5 == 0) || (b % 7 == 0)) {
        if (non_count >= 1) { non2 = b; non_count++; }
        else { non1 = b; non_count++; }
    }
    if (c <= 1 || (c % 2 == 0 && c != 2) || (c % 3 == 0) || (c % 5 == 0) || (c % 7 == 0)) {
        if (non_count >= 2) { non3 = c; non_count++; }
        else if (non_count >= 1) { non2 = c; non_count++; }
        else { non1 = c; non_count++; }
    }
    if (d <= 1 || (d % 2 == 0 && d != 2) || (d % 3 == 0) || (d % 5 == 0) || (d % 7 == 0)) {
        if (non_count >= 3) { non4 = d; non_count++; }
        else if (non_count >= 2) { non3 = d; non_count++; }
        else if (non_count >= 1) { non2 = d; non_count++; }
        else { non1 = d; non_count++; }
    }
    if (e <= 1 || (e % 2 == 0 && e != 2) || (e % 3 == 0) || (e % 5 == 0) || (e % 7 == 0)) {
        if (non_count >= 4) { non5 = e; non_count++; }
        else if (non_count >= 3) { non4 = e; non_count++; }
        else if (non_count >= 2) { non3 = e; non_count++; }
        else if (non_count >= 1) { non2 = e; non_count++; }
        else { non1 = e; non_count++; }
    }
    
    printf("Non-prime numbers (%d found): ", non_count);
    if (non_count >= 1) printf("%d ", non1);
    if (non_count >= 2) printf("%d ", non2);
    if (non_count >= 3) printf("%d ", non3);
    if (non_count >= 4) printf("%d ", non4);
    if (non_count >= 5) printf("%d ", non5);
    printf("\n");
    
    return 0;
}
