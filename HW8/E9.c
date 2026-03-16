#include <stdio.h>
#define n 10

int main(void)
{
    int arr[n];
    

    for (int i = 0; i < n; i++)
        
     scanf("%d", &arr[i]);
    
    int sum = arr[ n-1];
    
    for (int i=n-2; i >=0; i--)
    {
        arr[ i + 1 ] = arr [ i ];
    }
    arr[ 0 ] = sum;
    
    for (int i = 0; i < n; i++)
    
            printf("%d ", arr[i]);
        
    printf("\n");
    return 0;
}
