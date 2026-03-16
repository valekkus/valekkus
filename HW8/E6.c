#include <stdio.h>
#define n 12

int main(void)
{
    int arr[n];
    float sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = sum / n;

    printf("%.2f\n", avg);

    return 0;
}
