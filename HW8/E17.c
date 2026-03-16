#include <stdio.h>

#define n 10

int main(void) {
    int arr[n];
    int counts[n] = {0};
        
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                counts[i]++;
            }
        }
    }
        
        for (int i = 0; i < n; i++) {
            if (counts[i] == 1) {
                printf("%d ", arr[i]);
                
             
            }
        }
                return 0;
            
}
