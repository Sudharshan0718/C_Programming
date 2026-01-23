#include <stdio.h>

int main() {
    int arr[100];
    int num;
    int count = 0;
    int i = 0;
    
    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);
    
    while (num != 0 && i < 100) {
        arr[i] = num;
        count++;
        i++;
        scanf("%d", &num);
    }
    
    if (count > 0 && arr[0] == arr[count - 1]) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }
    
    return 0;
}