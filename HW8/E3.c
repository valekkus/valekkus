#include <stdio.h>
#define n 10

int main(void)
{
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    int min = arr[ 0 ], ind_min = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[ i ] < min){
            
            min = arr[i];
            ind_min = i+1;
        }
    }
    int max = arr[ 0 ], ind_max = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[ i ] > max){
            
            max = arr[i];
            ind_max = i+1;
        }
    }
    
    printf("%d %d %d %d\n", ind_max, max, ind_min, min);
    

    return 0;
}
