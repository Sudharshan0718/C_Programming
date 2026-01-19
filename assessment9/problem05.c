#include <stdio.h>

int main() {
    int a, b, c, d, e, temp;
    
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if (b < a) { temp = a; a = b; b = temp; }
    if (c < a) { temp = a; a = c; c = temp; }
    if (d < a) { temp = a; a = d; d = temp; }
    if (e < a) { temp = a; a = e; e = temp; }
    
    if (c < b) { temp = b; b = c; c = temp; }
    if (d < b) { temp = b; b = d; d = temp; }
    if (e < b) { temp = b; b = e; e = temp; }
    
    if (d < c) { temp = c; c = d; d = temp; }
    if (e < c) { temp = c; c = e; e = temp; }
    
    if (e < d) { temp = d; d = e; e = temp; }
    
    printf("Sorted in ascending order: %d %d %d %d %d\n", a, b, c, d, e);
    return 0;
}
