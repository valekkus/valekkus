#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_api.h"

int main(int argc, char *argv[]) {

    Record *data = NULL;
    int n = 0;

    char *file = NULL;
    int month = 0;

    //Обработка аргументов строки
    for (int i = 1; i < argc; i++) {

        if (strcmp(argv[i], "-h") == 0) {
            printf("-h справка\n-f file.csv вызов файла\n-m статистика за месяц\n");
            return 0;
        }

        if (strcmp(argv[i], "-f") == 0 && i + 1 < argc)
            file = argv[++i];

        if (strcmp(argv[i], "-m") == 0 && i + 1 < argc)
            month = atoi(argv[++i]);
    }

    if (!file) {                //Вывод ошибки если нет файла
        printf("Нет файла\n");
        return 1;
    }

    load_csv(file, &data, &n);

    if (!data || n == 0) {          //Вывод ошибки если нет данных
        printf("Нет данных\n");
        return 1;
    }

    // Отчет за месяц если введен аргумент -m
    if (month) {
        if (!has_month(data, n, month)) {
            printf("Нет данных за месяц %d\n", month);
        } else {
            printf("Месяц %d:\n", month);
            printf("Средняя: %.2f\n", avg_month(data, n, month));
            printf("Мин: %d\n", min_month(data, n, month));
            printf("Макс: %d\n", max_month(data, n, month));
        }
    }

    // Отчет за все месяца и за год
    else {
        for (int m = 1; m <= 12; m++) {

            if (!has_month(data, n, m))
                continue;

            printf("\nМесяц %d:\n", m);
            printf("Средняя: %.2f\n", avg_month(data, n, m));
            printf("Мин: %d\n", min_month(data, n, m));
            printf("Макс: %d\n", max_month(data, n, m));
        }

        printf("\nГод:\n");
        printf("Средняя: %.2f\n", avg_year(data, n));
        printf("Мин: %d\n", min_year(data, n));
        printf("Макс: %d\n", max_year(data, n));
        
    }

    free(data);
    return 0;
}