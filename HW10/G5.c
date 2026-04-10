#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *inputFile = fopen("input.txt", "r"); // Открываем входной файл для чтения
    FILE *outputFile = fopen("output.txt", "w"); // Открываем выходной файл для записи

    char str[1001]; // Объявляем буфер для строки (с запасом на нулевой символ)
    fgets(str, sizeof(str), inputFile); // Читаем строку из входного файла

    // Обрабатываем строку, заменяя символы
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'b'; // Заменяем 'a' на 'b'
        } else if (str[i] == 'b') {
            str[i] = 'a'; // Заменяем 'b' на 'a'
        } else if (str[i] == 'A') {
            str[i] = 'B'; // Заменяем 'A' на 'B'
        } else if (str[i] == 'B') {
            str[i] = 'A'; // Заменяем 'B' на 'A'
        }
    }

    fprintf(outputFile, "%s", str); // Записываем измененную строку в выходной файл

    fclose(inputFile); // Закрываем входной файл
    fclose(outputFile); // Закрываем выходной файл

    return 0;
}
