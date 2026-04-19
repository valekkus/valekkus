#include <stdio.h>
#include "temp_api.h"

// ================= CSV =================

int load_csv(const char *filename, TempRecord *data, int *size) {
    FILE *f = fopen(filename, "r");
    if (!f) return -1;

    *size = 0;

    while (fscanf(f, "%d;%d;%d;%d;%d;%d",
                  &data[*size].year,
                  &data[*size].month,
                  &data[*size].day,
                  &data[*size].hour,
                  &data[*size].minute,
                  &data[*size].temperature) == 6) {
        (*size)++;
    }

    fclose(f);
    return 0;
}

// ================= Вывод =================

void print_data(TempRecord *data, int size) {
    for (int i = 0; i < size; i++) {
        printf("%04d-%02d-%02d %02d:%02d => %d\n",
            data[i].year,
            data[i].month,
            data[i].day,
            data[i].hour,
            data[i].minute,
            data[i].temperature);
    }
}

// ================= Добавление / удаление =================

int add_record(TempRecord *data, int *size, TempRecord rec) {
    data[*size] = rec;
    (*size)++;
    return 0;
}

int delete_record(TempRecord *data, int *size, int index) {
    if (index < 0 || index >= *size) return -1;

    for (int i = index; i < *size - 1; i++) {
        data[i] = data[i + 1];
    }

    (*size)--;
    return 0;
}

// ================= Сортировка =================

void sort_by_date(TempRecord *data, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (
                data[j].year > data[j+1].year ||
                (data[j].year == data[j+1].year && data[j].month > data[j+1].month) ||
                (data[j].year == data[j+1].year && data[j].month == data[j+1].month && data[j].day > data[j+1].day) ||
                (data[j].year == data[j+1].year && data[j].month == data[j+1].month &&
                 data[j].day == data[j+1].day && data[j].hour > data[j+1].hour)
            ) {
                TempRecord tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }
}

// ================= Статистика (месяц) =================

float avg_month(TempRecord *data, int size, int month) {
    int sum = 0, count = 0;

    for (int i = 0; i < size; i++) {
        if (data[i].month == month) {
            sum += data[i].temperature;
            count++;
        }
    }

    return count ? (float)sum / count : 0;
}

int min_month(TempRecord *data, int size, int month) {
    int min = 100;

    for (int i = 0; i < size; i++) {
        if (data[i].month == month && data[i].temperature < min) {
            min = data[i].temperature;
        }
    }

    return min;
}

int max_month(TempRecord *data, int size, int month) {
    int max = -100;

    for (int i = 0; i < size; i++) {
        if (data[i].month == month && data[i].temperature > max) {
            max = data[i].temperature;
        }
    }

    return max;
}

// ================= Статистика (год) =================

float avg_year(TempRecord *data, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += data[i].temperature;
    }

    return size ? (float)sum / size : 0;
}

int min_year(TempRecord *data, int size) {
    int min = 100;

    for (int i = 0; i < size; i++) {
        if (data[i].temperature < min) {
            min = data[i].temperature;
        }
    }

    return min;
}

int max_year(TempRecord *data, int size) {
    int max = -100;

    for (int i = 0; i < size; i++) {
        if (data[i].temperature > max) {
            max = data[i].temperature;
        }
    }

    return max;
}
