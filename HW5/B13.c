#include <stdio.h>

int main(void)
{
    int n, count1 = 0 , count2 = 0;

    scanf("%d", &n);

        while (n > 0)
    {
        int digit = n % 10;
        
        if (digit %2 != 0)
        {
            count1++;
        }
        
        if (digit %2 == 0)
        {
            count2++;
        }
        n /= 10;
    }

    printf("%d %d\n", count2, count1);

    return 0;
}
