#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    for (int del = 2; del <= 9; del++) {
        int count = 0;
        for (int number = 2; number <= n; number++) {
            
            if (number % del == 0) {
                count++;
            }
        }
       
        printf("%d %d \n", del, count);
    }
    printf("\n"); 

    return 0;
}
