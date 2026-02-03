#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int numbers, max;
    scanf("%d", &numbers);
    int sot = numbers/100;
    int des = (numbers/10)%10;
    int eden = numbers%10;
    max = sot>des ? sot : des;
    max = max>eden ? max : eden;
    printf("%d\n", max);
    return 0;
    
   
}
