#include <stdio.h>

void invert_array(int arr[], int start, int end) {
    while (start < end) {       //0<4 1<3
        int temp = arr[start];  //0   1
        arr[start] = arr[end];  //4   3
        arr[end] = temp;        //0   1
        start++;                //1   2
        end--;                  //3   2
    }
}

int main(void) {
    int arr[12];
    
    
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    invert_array(arr, 0, 3);

    invert_array(arr, 4, 7);
    
    invert_array(arr, 8, 11);

    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
