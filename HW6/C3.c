#include <stdio.h>
int power (int n, int p)
{
    int result = 0;
    result=(n + p)/2;
    
    return result;
}
int main(void){
    int n, m;
    scanf("%d" "%d", &n, &m);
    int result = power(n, m);
    printf("%d\n", result);
    return 0;
    
}
