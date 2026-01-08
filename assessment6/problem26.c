#include<stdio.h>
int main()
{
    int i;
    
    for(i = 1000; i <= 9999; i++)
    {
        if(i % 7 == 0 && i % 9 == 0)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
