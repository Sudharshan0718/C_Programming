#include<stdio.h>
int main(){
    int num, n, r, d, first, count, p, result;

    printf("Enter a number : ");
    scanf("%d",&num);

    if(num == 0){
        printf("0");
        return 0;
    }

    n = num;
    r = 0;
    count = 0;

Loop1:
    if(n != 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
        count = count + 1;
        goto Loop1;
    }

    first = r % 10;

    if(first % 2 == 0){
        printf("%d", num);
    }
    else{
        first = first - 1;

        p = 1;
        count = count - 1;

PowLoop:
        if(count > 0){
            p = p * 10;
            count = count - 1;
            goto PowLoop;
        }

        result = num % p;
        result = first * p + result;

        printf("%d", result);
    }

    return 0;
}
