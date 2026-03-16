#include <stdio.h>
#define n 10

int main(void)
{
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    
    int sum = 0;
    int summ = arr[0];
    for (int i = 0; i < 10; i++)
        {
            
            if (arr[ i ]>0)
                sum += arr[ i ];
                
                   
        }
    

    printf("%d \n",   sum );
    

    return 0;
}
