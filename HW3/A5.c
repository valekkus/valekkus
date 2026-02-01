#include <stdio.h>
int main(void)
{
    int a, b, c;
    float sum;
    scanf ("%d%d%d", &a, &b, &c);
    sum = (a + b + c)/3.0;
    printf("%.2f\n", sum);
    return 0;
}
