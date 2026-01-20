#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int odd1, odd2, odd3, odd4, odd5;
    int odd_count = 0;
    
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (a % 2 != 0) { odd1 = a; odd_count++; }
    if (b % 2 != 0) { 
        if (odd_count >= 1) { odd2 = b; odd_count++; }
        else { odd1 = b; odd_count++; }
    }
    if (c % 2 != 0) { 
        if (odd_count >= 2) { odd3 = c; odd_count++; }
        else if (odd_count >= 1) { odd2 = c; odd_count++; }
        else { odd1 = c; odd_count++; }
    }
    if (d % 2 != 0) { 
        if (odd_count >= 3) { odd4 = d; odd_count++; }
        else if (odd_count >= 2) { odd3 = d; odd_count++; }
        else if (odd_count >= 1) { odd2 = d; odd_count++; }
        else { odd1 = d; odd_count++; }
    }
    if (e % 2 != 0) { 
        if (odd_count >= 4) { odd5 = e; odd_count++; }
        else if (odd_count >= 3) { odd4 = e; odd_count++; }
        else if (odd_count >= 2) { odd3 = e; odd_count++; }
        else if (odd_count >= 1) { odd2 = e; odd_count++; }
        else { odd1 = e; odd_count++; }
    }
    
    printf("Odd numbers (%d): ", odd_count);
    if (odd_count >= 1) printf("%d ", odd1);
    if (odd_count >= 2) printf("%d ", odd2);
    if (odd_count >= 3) printf("%d ", odd3);
    if (odd_count >= 4) printf("%d ", odd4);
    if (odd_count >= 5) printf("%d ", odd5);
    printf("\n");
    
    return 0;
}
