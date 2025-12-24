#include<stdio.h>
int main(){
    int num,rev,digits;
    rev = 0;
    printf("Enter an number : ");
    scanf("%d",&num);
    if(num == 0)
    {
       rev = 0;
    }
    Loop1:
    if(num != 0)
          {
              digits = num % 10 ;
              rev = rev*10 + digits;
              num = num / 10;
              goto Loop1;
              
          }
    printf("%d",rev);
    return 0;
}