#include <stdio.h>

void intcon(int* src1, int size1, int* src2, int size2, int* dst) {
    int i, j;
    // Copy first array
    for (i = 0; i < size1; i++) {
        dst[i] = src1[i];
    }
    // Copy second array after first
    for (j = 0; j < size2; j++) {
        dst[size1 + j] = src2[j];
    }
}

int main() {
    int src1[] = {1, 2, 3};
    int src2[] = {4, 5, 6};
    int dst[6];  // Total size: 3 + 3
    int size1 = 3, size2 = 3;
    
    printf("Source 1: ");
    for (int i = 0; i < size1; i++) printf("%d ", src1[i]);
    printf("\nSource 2: ");
    for (int i = 0; i < size2; i++) printf("%d ", src2[i]);
    printf("\n");
    
    intcon(src1, size1, src2, size2, dst);
    
    printf("Concatenated: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", dst[i]);
    }
    printf("\n");
    
    return 0;
}
