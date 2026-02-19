#include <stdio.h>

unsigned long long summ(int n)
{
    return 1LL << (n-1);
}
int main(void){
    int a;
    scanf("%d", &a);
    unsigned long long result = summ(a);
    printf("%llu\n", result);
    return 0;
}


