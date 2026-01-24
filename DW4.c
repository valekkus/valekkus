#include <stdio.h>

int main(void) {
    int a = 4, b = 5, c = 7,  sum;
    // Нахождение суммы
    sum = a + b + c;
    // Вывод результата в нужном формате
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    
    a = a + 6;
    b = b + 15;
    c = c + 23;
    
    sum = a + b + c;
    
    printf("%d+%d+%d=%d\n", a, b, c, sum);
   

    return 0;
}
