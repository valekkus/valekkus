#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Функция для сравнения двух символов (цифр) для сортировки по убыванию
int compareCharsDesc(const void *a, const void *b) {
    char char_a = *(const char *)a;
    char char_b = *(const char *)b;
    // Чтобы получить максимальное число, сортируем цифры от большей к меньшей.
    // Вычитание char_a из char_b дает нужный порядок убывания.
    return char_b - char_a;
}

int main(void) {
    char number_str[20]; // Буфер для хранения числа как строки

    // Читаем число как строку, чтобы получить отдельные цифры
    scanf("%s", number_str);

    // Находим длину строки (количество цифр)
    int len = strlen(number_str);

    // Сортируем символы (цифры) в строке в порядке убывания.
    // qsort - это стандартная функция сортировки в C.
    qsort(number_str, len, sizeof(char), compareCharsDesc);

    // Выводим строку с переставленными цифрами, которая теперь представляет максимальное число
    printf("%s\n", number_str);

    return 0;
}
