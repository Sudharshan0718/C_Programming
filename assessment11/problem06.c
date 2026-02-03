<<<<<<< HEAD
#include <stdio.h>

void stringcopy(char* src, char* dst) {
    int i = 0;
    while (src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';  // Add null terminator
}

int main() {
    char source[] = "Hello World";
    char dest[20];  // Enough space for copy

    printf("Original source: %s\n", source);

    stringcopy(source, dest);

    printf("Copied string: %s\n", dest);

    return 0;
}
=======
#include <stdio.h>

void stringcopy(char* src, char* dst) {
    int i = 0;
    while (src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';  // Add null terminator
}

int main() {
    char source[] = "Hello World";
    char dest[20];  // Enough space for copy

    printf("Original source: %s\n", source);

    stringcopy(source, dest);

    printf("Copied string: %s\n", dest);

    return 0;
}
>>>>>>> 531ea79 (assessment11)
