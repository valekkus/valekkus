
#include <stdio.h>

int main(void) {
    
    char n_str[1001];
    scanf("%1000s", n_str);

    int digit_counts[10] = {0};

    
    for (int i = 0; n_str[i] != '\0'; ++i) {
        
        int digit = n_str[i] - '0';

        digit_counts[digit]++;
    }

    for (int i = 0; i < 10; ++i) {
        
        if (digit_counts[i] > 0) {
            
            printf("%d %d\n", i, digit_counts[i]);
        }
    }

    return 0;
}

