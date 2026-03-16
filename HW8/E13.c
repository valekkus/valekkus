#include <stdio.h>
#include <stdlib.h>

int second(int num) {
    
    int digit = (abs(num) / 10) % 10;
    return digit == 0;
}

int main(void) {
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int filter[10];
    int index = 0;
    for (int i = 0; i < 10; i++) {
        if (second(arr[i])) {
            filter[index++] = arr[i];
        }
    }

    
    for (int i = 0; i < index; i++) {
        printf("%d ", filter[i]);
    }
    printf("\n");

    return 0;
}
