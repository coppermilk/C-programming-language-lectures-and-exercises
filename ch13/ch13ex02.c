#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 80

int main() {
        char ch;
        char file_name[LEN];
        FILE * p_file_input, * p_file_output;

        printf("Input file name for copy: ");
        scanf("%s", file_name);

        if ((p_file_input = fopen(file_name, "rb")) == NULL) {
                printf("Can't open %s for reading.\n", file_name);
                exit(EXIT_FAILURE);
        }

        if ((p_file_output = fopen(strcat(file_name, "copy"), "wb")) == NULL) {
                printf("Can't open %s for reading.\n", file_name);
                exit(EXIT_FAILURE);
        }

        while ((ch = getc(p_file_input)) != EOF) {
                putc(ch, p_file_output);
        }

        fclose(p_file_output);
        fclose(p_file_input);
  
        return 0;
}
