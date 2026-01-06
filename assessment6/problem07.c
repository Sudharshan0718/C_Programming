#include<stdio.h>
int main()
{
    int i,tens,units;
    i=11;
    while(i<=99)
    {
        if(i%2!=0)
        {
            tens=i/10;
            units=i%10;
            if(tens+units==7)
            {
                printf("%d\n",i);
            }
        }
        i=i+2;
    }
    return 0;
}
