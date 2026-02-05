#include <stdio.h>
void getInput(char *str, char *ch)
{
    printf("Enter string: ");
    scanf("%s", str);
    printf("Enter character: ");
    scanf(" %c", ch);
}
void findPositions(char *str, char ch)
{
    int pos = 1;
    int found = 0;
    char *ptr = str;
    printf("Positions:");
    while (*ptr)
    {
        if (*ptr == ch)
        {
            printf("%d ", pos);
            found = 1;
        }
        ptr++;
        pos++;
    }
    if (!found)
        printf("Character not found");
    printf("\n");
}
int main()
{
    char str[100];
    char ch;
    getInput(str, &ch);
    findPositions(str, ch);
}