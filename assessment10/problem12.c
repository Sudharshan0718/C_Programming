#include <stdio.h>
int main() 
{
    int arr[50];
    char str[51];
    int n, i;
    printf("Enter number of digits : ");
    scanf("%d", &n);
    printf("Enter %d digits :\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        str[i] = arr[i] + '0';
    }
    str[n] = '\0';   
    printf("Character array = %s", str);
}