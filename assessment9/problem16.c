#include <stdio.h>
int main() {
    int a[50], b[50], sum[51];
    int n, i, carry = 0;
    printf("Enter number of digits : ");
    scanf("%d", &n);
    printf("Enter first number :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter second number :\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &b[i]);
    }
    for(i = n - 1; i >= 0; i--) {
        sum[i + 1] = a[i] + b[i] + carry;
        carry = sum[i + 1] / 10;
        sum[i + 1] = sum[i + 1] % 10;
    }
    sum[0] = carry;
    printf("Sum = ");
    for(i = 0; i <= n; i++)
    {
        printf("%d", sum[i]);
    }
}