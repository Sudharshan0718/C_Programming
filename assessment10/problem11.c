#include <stdio.h>
int main()
 {
    char str[60];
    int arr[50];
    int i = 0, len = 0;
    printf("Enter a number string (up to 50 digits): ");
    scanf("%s", str);
    while(str[len] != '\0')
    {
        len++;
    }
    for(i = 0; i < len; i++) 
    {
        arr[i] = str[i] - '0';
    }
    printf("Integer array elements:\n");
    for(i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}