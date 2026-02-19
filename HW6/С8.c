#include <stdio.h>

char toUpperLatin(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main(void) {
    char str[200];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == '.') {
            break;  // не выводим точку
        }
        putchar(toUpperLatin(str[i]));
        i++;
    }

    return 0;
}
