#include <stdio.h>

int main(void)
{
    int n;
   
    scanf("%d", &n);

  // if (n > 100)
    //{
      //  printf("Число не должно превышать 100.\n");
        //return 1;
//    }

    for (int i = 1; i <= n && n<=100; i++)
    {
        int qwadr = i * i;
        int cube = i * i * i;
        printf("%d %d %d\n", i, qwadr, cube);
    }

    return 0;
}
