#include <stdio.h>

void compare_strings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("FAILURE\n");
            return;
        }
        i++;
    }
    // Check if both strings end at same position
    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("SUCCESS\n");
    } else {
        printf("FAILURE\n");
    }
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    
    printf("Test 1 - Identical strings:\n");
    compare_strings(str1, str2);
    
    char str3[] = "Hello World";
    printf("\nTest 2 - Different length:\n");
    compare_strings(str1, str3);
    
    char str4[] = "Hellx";
    printf("\nTest 3 - Different character:\n");
    compare_strings(str1, str4);
    
    return 0;
}
