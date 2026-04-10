#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *inputFile = fopen("input.txt", "r"); // Открываем файл для чтения
    FILE *outputFile = fopen("output.txt", "w"); // Открываем файл для записи

    char str[1001]; // Объявляем массив для хранения строки (с запасом на символ новой строки и нулевой символ)
    fgets(str, sizeof(str), inputFile); // Читаем строку из файла

    // Удаляем символ новой строки, если он есть в конце строки, прочитанной fgets
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    unsigned long len = strlen(str); // Получаем длину строки
    char lastChar = str[len - 1]; // Получаем последний символ строки

    // Проходим по всей строке
    for (int i = 0; i < len-1; i++) {
        // Если текущий символ совпадает с последним символом
        if (str[i] == lastChar) {
            // Записываем номер символа (индекс + 1) в выходной файл, добавляя пробел
            fprintf(outputFile, "%d ", i );
        }
    }

    fclose(inputFile); // Закрываем входной файл
    fclose(outputFile); // Закрываем выходной файл

    return 0;
}
