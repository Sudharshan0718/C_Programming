#include<stdio.h>
int main(){
    int i;
    for(i=10; i<=99; i++){
        if(i%2==0 && (i/10 + i%10)==6){
            printf("%d\n",i);
        }
    }
    return 0;
}
