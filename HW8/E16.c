#include <stdio.h>

#define n 10

int main(void) {
    int arr[n];
    int counts[n] = {0};
    int max = 0;
    int element = 0;

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                counts[i]++;
            }
        }
        
        if (counts[i] > max) {
            max = counts[i];
            element = arr[i];
        }
    }

    printf("%d\n", element);

    return 0;
}
