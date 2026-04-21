#ifndef TEMP_API_H
#define TEMP_API_H
// Структура для хранения одной записи
typedef struct {
    int year, month, day, hour, minute;
    int temp;
} Record;
// Прототип функции чтения из файла
void load_csv(const char *file, Record **data, int *n);

// Прототип данных за месяц
float avg_month(Record data[], int n, int m);
int min_month(Record data[], int n, int m);
int max_month(Record data[], int n, int m);

// Прототип данных за год
float avg_year(Record data[], int n);
int min_year(Record data[], int n);
int max_year(Record data[], int n);

// Проверка месяца(если нет данных не выводится)
int has_month(Record data[], int n, int m);

#endif