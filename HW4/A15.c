#include <stdio.h>

int main(void)
{
    double x1, y1, x2, y2;
    
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double k = (y2 - y1) / (x2 - x1);// Вычисление углового коэффициента


    double b = y1 - k * x1;// Вычисление свободного члена

 
    printf("%.2f  %.2f\n", k, b);

    return 0;
}
