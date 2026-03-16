#include <stdio.h>
#define n 10

int main(void)
{
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    int max1 = arr[0], max2 = arr[1];
        for (int i = 1; i < 10; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2) {
                max2 = arr[i];
            }
        }
    

    printf("%d \n",   max1 + max2 );
    

    return 0;
}
