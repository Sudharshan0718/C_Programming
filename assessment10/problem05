#include <stdio.h>
int main() {
    int num, i = 0, j;
    char str[50];
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0)
    {
        str[i++] = '0';
    }
    else
    {
        while (num > 0) 
        {
            str[i] = (num % 10) + '0';
            num = num / 10;
            i++;
        }
    }
    str[i] = '\0';
    for (j = 0; j < i / 2; j++) {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
    printf("String value = %s", str);
}
