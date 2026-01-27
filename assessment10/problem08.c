#include <stdio.h>
int main() {
    char str[51]; 
    int i, valid = 1;
    
    printf("Enter a string of numbers (up to 50 digits): ");
    scanf("%50s", str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] < '0' || str[i] > '9') {
            valid = 0;
            break;
        }
    }    
    if(valid && i <= 50) {
        printf("Valid number\n");
    } else {
        printf("Invalid number\n");
    }
    
    return 0;
}
