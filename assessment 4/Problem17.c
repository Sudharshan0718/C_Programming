#include<stdio.h>
int main(){
    int num,i;
    i=2;
    printf("Enter an number : ");
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");
        goto end;
    }
    Loop:
    if(i<num){
      if(num % i == 0 ){
            printf("Not Prime");
            goto end;
        }
        i++;
        goto Loop;
    }
    printf("Prime");
    end:
    return 0;
}