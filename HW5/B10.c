#include <stdio.h>
 
int main(void)
{
    int a, num;
    scanf("%d", &a);
    while (a > 0)
    {
            num = a % 10;
            
            if (num <= a / 10 %10)
            {
                printf("NO\n");
                return 0;
            }
            a /= 10;
                
    }
    
     printf("YES\n");
    
    return 0;
}
