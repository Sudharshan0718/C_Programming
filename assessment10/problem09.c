#include <stdio.h>
int main() {
    char str[51];
    int i, j;
    printf("Enter a string of numbers (up to 50 digits): ");
    scanf("%50s", str);
    for(i = 0; str[i] == '0' && str[i] != '\0'; i++);
    for(j = 0; str[i] != '\0'; i++, j++) {
        str[j] = str[i];
    }
    str[j] = '\0';
    
    printf("%s\n", str);
    return 0;
}
