#include <stdio.h>
int main() {
    int a[51];
    int n, i, carry;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = n - 1; i > 0; i--) {
        carry = a[i] / 10;
        a[i] = a[i] % 10;
        a[i - 1] = a[i - 1] + carry;
    }
    printf("After adjusting carry:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}