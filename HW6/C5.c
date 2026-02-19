#include <stdio.h>

int summ(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i;
        
    }
    return result;
}
int main(void){
    int a;
    scanf("%d", &a);
    int result = summ(a);
    printf("%d\n", result);
    return 0;
}


