#include <stdio.h>
#define n 5

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

    printf("%.3f\n", avg);

    return 0;
}
