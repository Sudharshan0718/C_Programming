#include<stdio.h>
int main()
{
    int i;
    i=11;
    while(i<=20)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i=i+1;
    }
    return 0;
}
