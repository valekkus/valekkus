#include <stdio.h>

int main(void) {
    int n;
    
    scanf("%d", &n);

    int a = 0, b = 1;
    
    printf("%d ", b);

    for (int i = 1; i < n; i++)
    {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}
