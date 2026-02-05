#include <stdio.h>
int find_substring(char *mainstr,char *substr)
{
    int i,j;
    for(i = 0;mainstr[i] != '\0';i++)
    {
        for(j = 0;substr[j] != '\0';j++) 
        {
            if(mainstr[i + j] != substr[j])
                break;
        }
        if(substr[j] == '\0')
        {
            return i;
        }
    }
    return -1; 
}
int main() 
{
    char mainstr[200], substr[100];
    printf("Enter main string: ");
    fgets(mainstr, sizeof(mainstr), stdin);
    printf("Enter substring: ");
    fgets(substr, sizeof(substr), stdin);
    for(int i = 0; mainstr[i]; i++)
    {
        if(mainstr[i] == '\n') mainstr[i] = '\0';
    }
    for(int i = 0; substr[i]; i++)
    {
        if(substr[i] == '\n') substr[i] = '\0';
    }
    int pos = find_substring(mainstr, substr);
    if(pos >= 0)
    {
        printf("Position: %d", pos);
    }
    else
    {
        printf("Substring not found");
    }
}