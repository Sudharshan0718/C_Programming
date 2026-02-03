#include <stdio.h>

void strconcat(char* src1, char* src2, char* dst) {
    int i = 0, j = 0;
    
    // Copy first string
    while (src1[i] != '\0') {
        dst[i] = src1[i];
        i++;
    }
    
    // Copy second string
    j = 0;
    while (src2[j] != '\0') {
        dst[i + j] = src2[j];
        j++;
    }
    
    // Add null terminator
    dst[i + j] = '\0';
}

int main() {
    char src1[] = "Hello";
    char src2[] = "World";
    char dst[20];  // Enough space for both + null terminator
    
    printf("String 1: %s\n", src1);
    printf("String 2: %s\n", src2);
    
    strconcat(src1, src2, dst);
    
    printf("Concatenated: %s\n", dst);
    
    return 0;
}
