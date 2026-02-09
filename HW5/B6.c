#include <stdio.h>

int main(void) {
    int n;
    
    scanf("%d", &n);

    int digit = -1;
    while (n > 0)
    {
        int x = n % 10;
        
        if (x == digit)
        {
            printf("YES\n");
            return 0;
        }
       digit = x;
       n /= 10;
    }

    printf("NO\n");
    return 0;
}
