#ifndef TEMP_API_H
#define TEMP_API_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} Record;

// функции
void print_month_stats(Record data[], int size);
void print_year_stats(Record data[], int size);

#endif
