#include <stdio.h>
int main()
{
    int a[100], b[100];
    int num, count = 0;
    int i, j, n, sum, temp;
    printf("Enter numbers :\n");
    while(1) 
    {
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        a[count] = num;
        count++;
    }
    for(i = 0; i < count; i++) {
        n = a[i];
        if(n < 0)
        {
            n = -n;
        }
        sum = 0;
        while(n != 0) {
            sum = sum + (n % 10);
            n = n / 10;
        }
        b[i] = sum;
    }
    for(i = 0; i < count - 1; i++) {
        for(j = i + 1; j < count; j++) {
            if(b[i] > b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("\nNew array after digit-sum and sorting:\n");
    for(i = 0; i < count; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}