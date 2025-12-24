#include<stdio.h>
int main(){
    int num,digits,sum;
    sum = 0;
    printf("Enter an number : ");
    scanf("%d",&num);
    if(num == 0)
    {
       sum = 0;
    }
    Loop1:
    if(num != 0)
          {
              digits = num % 10 ;
              sum = sum + digits;
              num = num / 10;
              goto Loop1;
              
          }
    printf("%d",sum);
    return 0;
}