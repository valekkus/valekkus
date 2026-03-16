#include <stdio.h>
#define n 12
#define temp 4

int main(void)
{
    int arr[n];
    

    for (int i = 0; i < n; i++)
        
     scanf("%d", &arr[i]);
    
    int a = 4;
    int four [temp];
    
    for (int i=0; i < a; i++) {
        four[ i ] = arr[ n - a + i];
    }
    
    
    for (int i=11; i >=a; i--)
    {
        arr[ i ] = arr [ i - a ];
    }
    
    for (int i = 0; i < a; i++) {
            arr[i] = four[i];
        }
    
    
    for (int i = 0; i < n; i++)
    
            printf("%d ", arr[i]);
        
    printf("\n");
    return 0;
}
