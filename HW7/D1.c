#include <stdio.h>


void numbers(int n)
{
    if (n == 0) {
        return;
    }
    numbers(n - 1);
    printf("%d ", n);
}
    int main(void)
    {
        int n;
        
        
        scanf("%d", &n);
        
        
        numbers(n);
        printf("\n");
        
        return 0;
    }

