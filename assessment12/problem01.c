#include <stdio.h>
#include <string.h>
void getnumbers(char *n1,char *n2)
{
    printf("Enter first number : ");
    scanf("%50s", n1);
    printf("Enter second number: ");
    scanf("%50s", n2);
}
void addnumbers(char *n1, char *n2, char *res)
{
    int i, j, k, carry = 0;
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    i = len1 - 1;
    j = len2 - 1;
    k = (len1 > len2 ? len1 : len2);
    res[k + 1] = '\0';
    while (k >= 0)
    {
        int d1 = (i >= 0) ? n1[i] - '0' : 0;
        int d2 = (j >= 0) ? n2[j] - '0' : 0;
        int sum = d1 + d2 + carry;
        res[k] = (sum % 10) + '0';
        carry = sum / 10;
        i--; j--; k--;
    }
    if (carry)
        printf("1%s\n", res);
    else
        printf("%s\n", res + 1);
}
void print(char *res)
{
    
}
int main()
{
    char number1[51], number2[51];
    char result[52]; 
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
}