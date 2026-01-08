#include<stdio.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    // LCM(a,b,c) = LCM(a, LCM(b,c))
    int lcm_ab = lcm(a, b);
    int final_lcm = lcm(lcm_ab, c);
    
    printf("LCM: %d", final_lcm);
    return 0;
}
