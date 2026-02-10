#include <stdio.h>
 
int main(void)
{
    int a, num, counter = 0;
    scanf("%d", &a);
    while (a > 0)
    {
            num = a % 10;
            
            if (num == 9)
                
              counter++;
              
            a /= 10;
                
    }
    
    counter == 1 ? printf("YES\n") : printf("NO\n");
    
    return 0;
}
