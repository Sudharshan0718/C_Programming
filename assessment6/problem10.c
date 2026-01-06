#include<stdio.h>
int main()
{
int i,sum;
sum=0;
i=70;
while(i<=79)
{
if(i%10!=0)
{
sum=sum+i;
}
i=i+1;
}
printf("%d",sum);
}