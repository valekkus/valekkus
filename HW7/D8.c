#include <stdio.h>

void mens(int a, int b) {
      if (a > b) {
          return;
      }
      printf("%d ", a);
      mens(a + 1, b);
}

void bolh(int a, int b) {
      if (a < b) {
          return;
      }
      printf("%d ", a);
      bolh(a - 1, b); //
}

int main(void) {
      int a, b;
      
      scanf("%d %d", &a, &b);

      if (a <= b) {
          mens(a, b);
      } else {
          bolh(a, b);
      }
      printf("\n");

      return 0;
}

