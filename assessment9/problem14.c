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
    
    if (count > 0) {
        if (count % 2 == 1) {
            // Odd count - print middle element
            int middle_index = count / 2;
            printf("Middle number: %d", arr[middle_index]);
        } else {
            // Even count - print average of two middle elements
            int mid1 = count / 2 - 1;
            int mid2 = count / 2;
            float avg = (arr[mid1] + arr[mid2]) / 2.0;
            printf("Average of middle two: %.1f", avg);
        }
    }
    
    return 0;
}