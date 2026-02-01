#include <stdio.h>
int main(void)
{
    int a, b, c, sum, umn;
    scanf ("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    umn = a * b * c;
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    printf("%d*%d*%d=%d\n", a, b, c, umn);
    return 0;
}
