#include<stdio.h>
int main()
{
int num,digits,rev;
rev=0;
printf("Enter an number : ");
scanf("%d",&num);
while(num>0)
{
if(num>0)
{
digits=num%10;
rev=rev*10+digits;
num=num/10;
}
}
printf("%d",rev);
}