#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LEN 80

int main() {
        char ch;
        char file_name_input[LEN];
        char file_name_output[LEN];
        FILE * p_file_input, * p_file_output;

        printf("Input file name for copy: ");
        scanf("%s", file_name_input);

        printf("Input file copy: ");
        scanf("%s", file_name_output);

        if ((p_file_input = fopen(file_name_input, "rb")) == NULL) {
                printf("Can't open %s for reading.\n", file_name_input);
                exit(EXIT_FAILURE);
        }

        if ((p_file_output = fopen(file_name_output, "wb")) == NULL) {
                printf("Can't open %s for reading.\n", file_name_input);
                exit(EXIT_FAILURE);
        }

        while ((ch = getc(p_file_input)) != EOF) {
                putc(toupper(ch), p_file_output);
        }

        fclose(p_file_output);
        fclose(p_file_input);
        return 0;
}
