#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "temp_api.h"

#define MAX_RECORDS 10000

void print_help(void) {
    printf("Использование:\n");
    printf("-h            справка\n");
    printf("-f <file>     CSV файл\n");
    printf("-m <month>    статистика за месяц\n");
}

int main(int argc, char *argv[]) {
    TempRecord data[MAX_RECORDS];
    int size = 0;
    int n = 0;

    char *file = NULL;
    int month = -1;

    // === Парсинг аргументов ===
    for (int i = 1; i < argc; i++) {

        if (strcmp(argv[i], "-h") == 0) {
            print_help();
            return 0;
        }

        else if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
            file = argv[++i];
        }

        else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) {
            month = atoi(argv[++i]);
        }
    }

    if (!file) {
        printf("Ошибка: не указан файл (-f)\n");
        return 1;
    }

    // === Загрузка данных ===
    if (load_csv(file, data, &size) != 0) {
        printf("Ошибка чтения файла\n");
        return 1;
    }

    // === Сортировка ===
    sort_by_date(data, size);

    //print_data(data, size); // при необходимости

    // === Статистика ===
    load_csv(file, data, &n);
    if (month != -1) {
        printf("Статистика за месяц %d:\n", month);
        printf("Средняя: %.2f\n", avg_month(data, size, month));
        printf("Мин: %d\n", min_month(data, size, month));
        printf("Макс: %d\n", max_month(data, size, month));
    } else {
        for (int m=1; m <= 12; m++) {
        printf("Статистика за месяц %d:\n", m);
        printf("Средняя: %.2f\n", avg_month(data, size, m));
        printf("Мин: %d\n", min_month(data, size, m));
        printf("Макс: %d\n", max_month(data, size, m));
        }
        
        printf("Статистика за год:\n");
        printf("Средняя: %.2f\n", avg_year(data, size));
        printf("Мин: %d\n", min_year(data, size));
        printf("Макс: %d\n", max_year(data, size));
        
    }

    return 0;
}
