#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int even1, even2, even3, even4, even5;
    int even_count = 0;
    
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a % 2 == 0) { even1 = a; even_count++; }
    if (b % 2 == 0) { 
        if (even_count >= 1) { even2 = b; even_count++; }
        else { even1 = b; even_count++; }
    }
    if (c % 2 == 0) { 
        if (even_count >= 2) { even3 = c; even_count++; }
        else if (even_count >= 1) { even2 = c; even_count++; }
        else { even1 = c; even_count++; }
    }
    if (d % 2 == 0) { 
        if (even_count >= 3) { even4 = d; even_count++; }
        else if (even_count >= 2) { even3 = d; even_count++; }
        else if (even_count >= 1) { even2 = d; even_count++; }
        else { even1 = d; even_count++; }
    }
    if (e % 2 == 0) { 
        if (even_count >= 4) { even5 = e; even_count++; }
        else if (even_count >= 3) { even4 = e; even_count++; }
        else if (even_count >= 2) { even3 = e; even_count++; }
        else if (even_count >= 1) { even2 = e; even_count++; }
        else { even1 = e; even_count++; }
    }
    
    printf("Even numbers (%d found): ", even_count);
    if (even_count >= 1) printf("%d ", even1);
    if (even_count >= 2) printf("%d ", even2);
    if (even_count >= 3) printf("%d ", even3);
    if (even_count >= 4) printf("%d ", even4);
    if (even_count >= 5) printf("%d ", even5);
    printf("\n");
    
    return 0;
}
