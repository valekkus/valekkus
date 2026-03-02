#include <stdio.h>
int x=0;

void numbers(int n)
{
    
    if (n == 0)
    {
        return;
    }
    else
    {
        numbers(n - 1);
        x+=n;
    }
    
    //printf("%d\n", x);
}
    int main(void)
    {
        int n;
        
        
        
        scanf("%d", &n);
        
        
        numbers(n);
      
        
        printf("%d\n", x);
        
        return 0;
    }

