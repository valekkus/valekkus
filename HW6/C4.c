#include <stdio.h>

int f(int x)
{
    if (x < -2)
    {
        return 4;
    }
    else if (x < 2 && x >= -2)
    {
        return x * x;
    }
    else
    {
        return x * x + 4 * x + 5;
    }
}

int main(void) {
    int x, max_value = 0;
    
    while (scanf("%d", &x) == 1 && x != 0)
    {
        int current_value = f(x);
        
        if (current_value > max_value)
        {
            max_value = current_value;
        }
    }

    
    printf("%d\n", max_value);

    return 0;
}
