#include <stdio.h>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void)
{
    int n;
    
    scanf("%d", &n);

    
    if (n < 0 || n > 20) {
       
        return 1;
    }

    
    int result = factorial(n);

    
    printf("%d\n", result);

    return 0;
}
