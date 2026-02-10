#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int min_digit = 9;
    
    int max_digit = 0;

    while (n > 0)
    {
        int digit = n % 10;
        
        if (digit < min_digit)
        {
            min_digit = digit;
        }
        
        if (digit > max_digit)
        {
            max_digit = digit;
        }
        n /= 10;
    }

    printf("%d %d\n", min_digit, max_digit);

    return 0;
}
