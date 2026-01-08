int main()
{
    int a = 12, b = 18, temp, gcd;
    
    // Euclidean algorithm for GCD
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    
    // LCM = (original_a * original_b) / gcd
    return (12 * 18) / gcd;  // Returns 36
}

