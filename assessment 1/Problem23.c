#include <stdio.h>

int main() {
    int n,d0,d1,sum,result;
    printf("Enter a 2 digit number: ");
    scanf("%d", &n);
    d0=n%10;
    d1=n/10;
    sum=d0+d1;
    result=n-(sum%2)*5;
    printf("Result: %d\n", result);
    return 0;
}