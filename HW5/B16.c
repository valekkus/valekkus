#include <stdio.h>

int NOD(int a, int b)
   {
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
   }

int main(void)
{
    int a, b;
    
    scanf("%d %d", &a, &b);

    int result = NOD(a, b);

    printf("%d\n", result);

    return 0;
}
