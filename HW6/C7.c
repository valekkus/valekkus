#include <stdio.h>

void convert_to_base(int n, int p) {
    if (n == 0) {
        //printf("0\n");
        return ;
    }
    else
    {
        
        convert_to_base(n / p, p);
        
        printf("%d", n % p);
    }
}

int main(void)
{
    int n, p;
    
    scanf("%d %d", &n, &p);
    if (n == 0){
        printf("0\n");
    }
    else {
        convert_to_base(n, p);
        printf("\n");
        
        return 0;
    }
    
}
