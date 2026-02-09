#include <stdio.h>

int main(void)
{
    int n;
    int x;
    scanf("%d %d", &n, &x);

    for (int i = n; i <= x && n<=100; i++)
    {
        int qwadr = i * i;
        printf("%d ", qwadr);
        
    }
    printf("\n");

    return 0;
}
