#include <stdio.h>

int main(void) {
    int n;
    
    int count = 0;    

    while (scanf("%d", &n) == 1 && n != 0)
    {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
