#include <stdio.h>
void reverse(int n){
    if (n == 0){
    
        return ;
    }
    printf("%d ", n % 10);
    reverse(n/10);
}
int main (void){
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
    }
    else
    {
        reverse(n);
    }
    printf("\n");
    return 0;
    
}
