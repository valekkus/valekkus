#include <stdio.h>


void numbers(int n)
{
    if (n == 0) {
        return;
    }
    
    printf("%d ", n);
    numbers(n - 1);
}
    int main(void)
    {
        int n;
        
        
        scanf("%d", &n);
        
        
        numbers(n);
        printf("\n");
        
        return 0;
    }
