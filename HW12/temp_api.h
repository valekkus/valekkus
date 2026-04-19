#ifndef TEMP_API_H
#define TEMP_API_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature; // -99..99
} TempRecord;

// Работа с массивом
void print_data(TempRecord *data, int size);
int add_record(TempRecord *data, int *size, TempRecord rec);
int delete_record(TempRecord *data, int *size, int index);
void sort_by_date(TempRecord *data, int size);

// CSV
int load_csv(const char *filename, TempRecord *data, int *size);

// Помесячная статистика
float avg_month(TempRecord *data, int size, int month);
int min_month(TempRecord *data, int size, int month);
int max_month(TempRecord *data, int size, int month);

// Годовая статистика
float avg_year(TempRecord *data, int size);
int min_year(TempRecord *data, int size);
int max_year(TempRecord *data, int size);

#endif
