#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
  
    if (n >= 100 && n <= 999)
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
