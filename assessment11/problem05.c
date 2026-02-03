<<<<<<< HEAD
#include <stdio.h>

void memorycopy(int* src, int* dst, int size) {
    int i;
    for (i = 0; i < size * sizeof(int); i++) {
        dst[i] = src[i];
    }
}

int main() {
    int source[] = {10, 20, 30, 40, 50};
    int dest[5];
    int size = 5;  // Number of integers

    printf("Source: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("\n");

    memorycopy(source, dest, size);

    printf("Copied to dest: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}
=======
#include <stdio.h>

void memorycopy(int* src, int* dst, int size) {
    int i;
    for (i = 0; i < size * sizeof(int); i++) {
        dst[i] = src[i];
    }
}

int main() {
    int source[] = {10, 20, 30, 40, 50};
    int dest[5];
    int size = 5;  // Number of integers

    printf("Source: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", source[i]);
    }
    printf("\n");

    memorycopy(source, dest, size);

    printf("Copied to dest: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n");

    return 0;
}
>>>>>>> 531ea79 (assessment11)
