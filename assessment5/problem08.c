#include<stdio.h>
int main()
{
    int d,q,r,sum;
    for(d=10;d<=99;d++)
    {
        q = d / 10;
        r = d % 10;
        sum = q + r;
        if((sum == 6) && (d%2 == 0))
        {
            printf("%d\n",d);
        }
    }
}