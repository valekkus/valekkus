#include <stdio.h>
 
int main(void)
{
int a, drugie, num;
    scanf("%d", &a);
    while (a > 0)
    {
            num = a % 10;
            drugie = a / 10;
            while (drugie > 0)
            {
            if (num == drugie % 10)
              {
                  printf("YES\n");
                  return 0;
              }
              drugie /= 10;
            }
            a /= 10;
    }
    printf("NO\n");
    return 0;
}
