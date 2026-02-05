#include <stdio.h>
int main() {
    char str[200];
    int i = 0, count = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        if((i == 0 && str[i] != ' ' && str[i] != '\n')
        || (str[i] != ' ' && str[i-1] == ' '))
           {
            count++;
           }
        i++;
    }
    printf("Word count: %d", count);
}