#include <stdio.h>

int main() {
    int arr[100];
    int num;
    int count = 0;
    int sum = 0;
    int i = 0;
    
    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);
    
    while (num != 0 && i < 100) {
        arr[i] = num;
        sum += num;
        count++;
        i++;
        scanf("%d", &num);
    }
    
    printf("Total numbers entered: %d\n", count);
    printf("Sum of numbers: %d\n", sum);
    
    return 0;
}
