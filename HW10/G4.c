#include <stdio.h>
#include <string.h>
#include <stdbool.h> // Для использования типа bool

int main(void) {
    FILE *inputFile = fopen("input.txt", "r"); // Открываем файл для чтения
    FILE *outputFile = fopen("output.txt", "w"); // Открываем файл для записи

    char word1[101], word2[101]; // Массивы для хранения слов (с запасом на нулевой символ)
    fscanf(inputFile, "%s %s", word1, word2); // Читаем два слова из файла

    int freq1[26] = {0}; // Массив для хранения частоты символов в первом слове
    int freq2[26] = {0}; // Массив для хранения частоты символов во втором слове

    // Считаем частоту символов в первом слове
    for (int i = 0; word1[i] != '\0'; i++) {
        if (word1[i] >= 'a' && word1[i] <= 'z') {
            freq1[word1[i] - 'a']++;
        }
    }

    // Считаем частоту символов во втором слове
    for (int i = 0; word2[i] != '\0'; i++) {
        if (word2[i] >= 'a' && word2[i] <= 'z') {
            freq2[word2[i] - 'a']++;
        }
    }

    // Находим и записываем символы, которые встречаются по одному разу в обоих словах
    bool firstCharWritten = false; // Флаг для управления выводом пробелов
    for (int i = 0; i < 26; i++) {
        // Проверяем, что символ встречается ровно один раз в каждом слове
        if (freq1[i] == 1 && freq2[i] == 1) {
            if (firstCharWritten) {
                fprintf(outputFile, " "); // Добавляем пробел перед следующим символом
            }
            fprintf(outputFile, "%c", 'a' + i); // Записываем символ в файл
            firstCharWritten = true; // Устанавливаем флаг, что первый символ уже записан
        }
    }

    fclose(inputFile); // Закрываем входной файл
    fclose(outputFile); // Закрываем выходной файл

    return 0;
}
