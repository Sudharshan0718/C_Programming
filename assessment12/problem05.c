#include <stdio.h>
#include <string.h>
void multiplynumbers(char *n1, char *n2, int *result)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    for(int i = 0; i < len1 + len2; i++)
        result[i] = 0;
    for(int i = len1 - 1; i >= 0; i--)
    {
        for(int j = len2 - 1; j >= 0; j--) 
        {
            int mul = (n1[i] - '0') * (n2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }
}
void print(int *result, int size)
{
    int i = 0;
    while(i < size && result[i] == 0)
        i++;
    if(i == size) 
    {
        printf("0");
        return;
    }
    for(; i < size; i++)
        printf("%d", result[i]);
}
int main()
{
    char number1[51], number2[51];
    int result[101];
    printf("Enter first number: ");
    scanf("%s", number1);
    printf("Enter second number: ");
    scanf("%s", number2);
    multiplynumbers(number1, number2, result);
    printf("Result: ");
    print(result, strlen(number1) + strlen(number2));
}