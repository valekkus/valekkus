#include <stdio.h>

int main(void) {
    int a[10];
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 10; i++) {
        int count = 0;

        for(int j = 0; j < 10; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        int printed = 0;
        for(int k = 0; k < i; k++) {
            if(a[i] == a[k]) {
                printed = 1;
                break;
            }
        }

        if(count > 1 && !printed) {
            printf("%d ", a[i]);
        }
        
    }
    printf("\n");

    return 0;
}
