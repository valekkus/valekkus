#include <stdio.h>

int sum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int umnoz(int num)
{
    int product = 1;
    while (num > 0)
    {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main(void)
   {
    int n;
    
    scanf("%d", &n);

    for (int i = 10; i <= n; i++)
    {
        if (sum(i) == umnoz(i))
        {
            printf("%d\n ", i);
        }
    }

    return 0;
}
