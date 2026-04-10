
#include <stdio.h>
#include <string.h>

#define MAX_LEN 101


int main(void) {
    
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    if (input_file == NULL || output_file == NULL) {
        
        perror("Ошибка открытия файла");
        return 1;
    }

    char str[MAX_LEN];
    if (fgets(str, MAX_LEN, input_file) != NULL) {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        fprintf(output_file, "%s, %s, %s ", str, str, str);

        fprintf(output_file, "%zu", len);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}

