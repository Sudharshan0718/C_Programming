#include<stdio.h>
int main()
{
int i,sum;
sum=0;
i=10;
while(i<=99)
{
if(i%10==5)
{
sum=sum+i;
}
i=i+1;
}
printf("%d",sum);
}