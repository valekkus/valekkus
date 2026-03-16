#include <stdio.h>

#define n 10

int main(void) {
    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int positive[n];
    int negative[n];
    int pos_count = 0;
    int neg_count = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] > 0) {
            positive[pos_count++] = numbers[i];
        } else if (numbers[i] < 0) {
            negative[neg_count++] = numbers[i];
        }
    }

   
    for (int i = 0; i < pos_count; i++) {
        printf("%d ", positive[i]);
    }
  
    for (int i = 0; i < neg_count; i++) {
        printf("%d ", negative[i]);
    }
    printf("\n");

    return 0;
}
