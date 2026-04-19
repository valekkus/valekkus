#include <stdio.h>
#include "temp_api.h"

void print_month_stats(Record data[], int size) {
    for (int m = 1; m <= 12; m++) {
        int sum = 0, count = 0;
        int min = 100, max = -100;

        for (int i = 0; i < size; i++) {
            if (data[i].month == m) {
                int t = data[i].temperature;

                sum += t;
                count++;

                if (t < min) min = t;
                if (t > max) max = t;
            }
        }

        if (count == 0) {
            printf("Месяц %d: нет информации\n", m);
        } else {
            printf("Месяц %d: средняя=%.2f минимальная=%d максимальная=%d\n",m, (double)sum / count, min, max);
        }
    }
}

void print_year_stats(Record data[], int size) {
    int sum = 0;
    int min = 100, max = -100;

    for (int i = 0; i < size; i++) {
        int t = data[i].temperature;

        sum += t;
        if (t < min) min = t;
        if (t > max) max = t;
    }

    printf("\nГодовая статистика:\n");
    printf("Средняя: %.2f\n", (double)sum / size);
    printf("Минимальная: %d\n", min);
    printf("Максимальная: %d\n", max);
}
