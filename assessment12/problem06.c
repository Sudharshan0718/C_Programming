#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 110
void trim(char *s)
{
    for(int i=0;s[i];i++)
        if(s[i]=='\n'){ s[i]='\0'; break; }
}
void add(char *a, char *b)
{
    int i=strlen(a)-1,j=strlen(b)-1,k=MAX-1;
    int carry=0;
    char res[MAX];
    res[k--]='\0';
    while(i>=0 || j>=0 || carry)
    {
        int d1=(i>=0)?a[i--]-'0':0;
        int d2=(j>=0)?b[j--]-'0':0;
        int sum=d1+d2+carry;
        res[k--]=sum%10+'0';
        carry=sum/10;
    }
    printf("%s\n",&res[k+1]);
}
void multiply(char *n1, char *n2){
    int len1=strlen(n1), len2=strlen(n2);
    int res[MAX]={0};
    for(int i=len1-1;i>=0;i--)
        for(int j=len2-1;j>=0;j--)
        {
            int mul=(n1[i]-'0')*(n2[j]-'0');
            int sum=mul+res[i+j+1];
            res[i+j+1]=sum%10;
            res[i+j]+=sum/10;
        }
    int i=0;
    while(i<len1+len2 && res[i]==0) i++;
    if(i==len1+len2) printf("0\n");
    else
    {
        for(;i<len1+len2;i++)
            printf("%d",res[i]);
        printf("\n");
    }
}
int main()
{
    char input[200];
    while(1)
    {
        printf("Calc> ");
        fgets(input,sizeof(input),stdin);
        trim(input);
        if(strcmp(input,"Exit")==0)
            break;
        char a[100], b[100], op;
        sscanf(input,"%[^+-*/]%c%s",a,&op,b);
        if(op=='+') add(a,b);
        else if(op=='*') multiply(a,b);
        else
            printf("Operation not implemented here\n");
    }
}