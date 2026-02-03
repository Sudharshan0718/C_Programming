<<<<<<< HEAD
#include <stdio.h>
void find_numbers() 
{
    int num, tens, units;
    for (num = 10; num <= 99; num++) 
    {
        if (num % 2 != 0) {  
            tens = num / 10;
            units = num % 10;
            if (tens + units == 7) {
                printf("%d\n", num);
            }
        }
    }
}
int main() {
    printf("odd number :\n");
    find_numbers();
    return 0;
}
=======
#include <stdio.h>
void find_numbers() 
{
    int num, tens, units;
    for (num = 10; num <= 99; num++) 
    {
        if (num % 2 != 0) {  
            tens = num / 10;
            units = num % 10;
            if (tens + units == 7) {
                printf("%d\n", num);
            }
        }
    }
}
int main() {
    printf("odd number :\n");
    find_numbers();
    return 0;
}
>>>>>>> 531ea79 (assessment11)
