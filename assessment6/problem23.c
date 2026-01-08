#include<stdio.h>
int main()
{
    int num, temp, two_digit, count, root;
    
    scanf("%d", &num);
    temp = num;
    count = 0;
    
    while(temp >= 10)
    {
        two_digit = temp % 100;
        
        root = 1;
        while(root * root <= two_digit)
        {
            if(root * root == two_digit)
            {
                count++;
                break;
            }
            root++;
        }
        
        temp = temp / 10;
    }
    
    printf("Total perfect square numbers: %d", count);
    return 0;
}
