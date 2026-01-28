#include <stdio.h>
int main() {
    char str[51];
    int i = 0, j = 0;
    printf("a number to 50 digits: ");
    scanf("%50s", str);
    while(str[i] != '\0') {
        i++;
    }
    i--;
    while(j < i) {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    printf("%s\n", str);
    return 0;
}
