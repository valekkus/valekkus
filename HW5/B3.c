#include <stdio.h>

int main(void)
{
    int n;
    int x;
    int sum=0;
    scanf("%d %d", &n, &x);

    for (int i = n; i <= x && n<=100; i++)
    {
        int qwadr = i * i;
        sum +=qwadr;
        
    }
    printf("%d\n", sum);

    return 0;
}
