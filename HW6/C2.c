#include <stdio.h>
int power (int n, int p)
{
    int result = 1;    
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}
int main(void){
    int n, m;
    scanf("%d" "%d", &n, &m);
    int result = power(n, m);
    printf("%d\n", result);
    return 0;
    
}
