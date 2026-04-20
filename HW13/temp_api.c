#include <stdio.h>
#include <stdlib.h>
#include "temp_api.h"
//Функция чтения из файла
void load_csv(const char *file, Record **data, int *n) {
    FILE *f = fopen(file, "r");     //Открытие файла
    if (!f) {
        printf("Ошибка файла\n");
        return;                     //Если не открылся будет ошибка
    }

    int capacity = 1000;            //Начальное выделение памяти под массив
    *data = malloc(capacity * sizeof(Record));
    *n = 0;

    char line[256];
    int line_num = 0;
    int errors = 0;
    

    while (fgets(line, sizeof(line), f)) {      //Чтение файла построчно
        line_num++;
        
        Record r;

        int res = sscanf(line, "%d;%d;%d;%d;%d;%d",     //Попытка чтения 6 значений
            &r.year, &r.month, &r.day,
            &r.hour, &r.minute, &r.temp);

        if (res != 6){                          //Если не удалось считать выводится ошибка и номер строки(программа пропускает строку)
            printf("Ошибка в строке %d: %s", line_num, line);
            errors++;
            continue; 
        }
        if (*n >= capacity) {               //Если массив заполняется, то увеличивается в 2 раза
            capacity *= 2;
            *data = realloc(*data, capacity * sizeof(Record));
        }

        (*data)[(*n)++] = r;            //Добавление новой записи в массив
    }
        printf("Ошибок в файле %d\n", errors );  //Общее колличевство ошибок в файле
        fclose(f);
}



int has_month(Record d[], int n, int m) {       //  Проверка месяца 
    for (int i = 0; i < n; i++)
        if (d[i].month == m)
            return 1;
    return 0;
}



float avg_month(Record d[], int n, int m) {     //  МЕСЯЦ 
    int s = 0, c = 0;

    for (int i = 0; i < n; i++)
        if (d[i].month == m) {
            s += d[i].temp;
            c++;
        }

    return c ? (float)s / c : 0;
}

int min_month(Record d[], int n, int m) {       //Минимальна температура в месяце
    int min = 100;

    for (int i = 0; i < n; i++)
        if (d[i].month == m && d[i].temp < min)
            min = d[i].temp;

    return min;
}

int max_month(Record d[], int n, int m) {       //Максимальна температура в месяце
    int max = -100;

    for (int i = 0; i < n; i++)
        if (d[i].month == m && d[i].temp > max)
            max = d[i].temp;

    return max;
}



float avg_year(Record d[], int n) {         //Год
    int s = 0;

    for (int i = 0; i < n; i++)
        s += d[i].temp;

    return n ? (float)s / n : 0;
}

int min_year(Record d[], int n) {       //Минимальна температура в году
    int min = 100;

    for (int i = 0; i < n; i++)
        if (d[i].temp < min)
            min = d[i].temp;

    return min;
}

int max_year(Record d[], int n) {       //Максимальна температура в году
    int max = -100;

    for (int i = 0; i < n; i++)
        if (d[i].temp > max)
            max = d[i].temp;

    return max;
}