#include <stdio.h> // Подключение стандартной библиотеки ввода-вывода

int main(void) {
    FILE *inputFile, *outputFile; // Объявление указателей на файлы
    int n; // Переменная для хранения числа N
    char resultString[27]; // Массив для хранения результирующей строки (максимум 26 символов + 1 для '\0')
    int digit = 2; // Начинаем с первой четной цифры (не 0)
    char letter = 'A'; // Начинаем с первой заглавной буквы

    // Открытие файла input.txt для чтения
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Ошибка при открытии файла input.txt\n");
        return 1; // Возврат кода ошибки
    }

    // Считывание числа N из файла
    fscanf(inputFile, "%d", &n);
    fclose(inputFile); // Закрытие файла input.txt

    // Проверка условия, что N четное и не превосходит 26
    if (n % 2 != 0 || n > 26) {
        printf("Ошибка: N должно быть четным и не превосходить 26.\n");
        return 1;
    }

    // Формирование строки
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) { // Четные позиции (индекс + 1)
            resultString[i] = digit + '0'; // Преобразование цифры в символ
            digit += 2; // Переход к следующей четной цифре
            if (digit > 8) { // Если цифра стала больше 8, начинаем снова с 2
                digit = 2;
            }
        } else { // Нечетные позиции
            resultString[i] = letter; // Добавление заглавной буквы
            letter++; // Переход к следующей букве
        }
    }
    resultString[n] = '\0'; // Добавление завершающего нулевого символа для строки

    // Открытие файла output.txt для записи
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Ошибка при открытии файла output.txt\n");
        return 1;
    }

    // Запись результирующей строки в файл
    fprintf(outputFile, "%s\n", resultString);
    fclose(outputFile); // Закрытие файла output.txt

    return 0; // Успешное завершение программы
}
