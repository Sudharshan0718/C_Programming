#include <stdio.h>

void compare_integers(int arr1[], int arr2[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            printf("FAILURE\n");
            return;
        }
    }
    printf("SUCCESS\n");
}
int main() {
    int array1[] = {10, 20, 30, 40};
    int array2[] = {10, 20, 30, 40};
    int size = 4;
    printf("Comparing arrays:\n");
    compare_integers(array1, array2, size);
    int array3[] = {10, 25, 30, 40};  
    printf("\nFailure test:\n");
    compare_integers(array1, array3, size);
    
    return 0;
}
