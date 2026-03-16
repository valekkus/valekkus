#include <stdio.h>
#include <string.h>

int main(void) {
    char n_str[100];
    scanf("%s", n_str);

    int len = strlen(n_str);

    for (int i = 0; i < len; i++) {
        
        printf("%c", n_str[i]);

        if (i < len - 1) {
            printf(" ");
        }
    }
   
    printf("\n");

    return 0;
}
