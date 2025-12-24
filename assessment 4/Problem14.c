#include <stdio.h>

int main()
{
    int num, original, first, last;
    int mid, rev, rev_mid;

    printf("Enter a number : ");
    scanf("%d", &num);

    if (num < 10) {
        printf("%d", num);
        return 0;
    }

    original = num;

    last = num % 10;

    while (num >= 10)
        num = num / 10;
    first = num;

    mid = original / 10;
    mid = mid / 10;

    rev = 0;

Loop1:
    if (mid != 0) {
        rev = rev * 10 + mid % 10;
        mid = mid / 10;
        goto Loop1;
    }

    rev_mid = 0;

Loop2:
    if (rev != 0) {
        rev_mid = rev_mid * 10 + rev % 10;
        rev = rev / 10;
        goto Loop2;
    }

    printf("%d", last);
    if (rev_mid != 0)
        printf("%d", rev_mid);
    printf("%d", first);

    return 0;
}
