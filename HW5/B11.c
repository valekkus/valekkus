#include <stdio.h>
 
int main(void)
{
    int a, num;
    scanf("%d", &a);
    if (a == 0)
    {
        printf("%d\n", a);
        return 0;
    }
    while (a > 0)
    {
        
        num = a % 10;
                  
            printf("%d", num);
            
            a /= 10;
                
    }
    
     printf("\n");
    
    return 0;
}
