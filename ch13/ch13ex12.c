#include <stdio.h>
#include <stdlib.h>

#define ROWS 20
#define COLS 30
#define LEN 32

int main() {
        FILE * p_file_input, * p_file_output;
        char file_name_input[LEN];
        char file_name_output[LEN];
        char picture[ROWS][COLS];
        char digits[10] = {
                ' ',
                '.',
                '\'',
                ':',
                '-',
                '*',
                '=',
                '@',
                '%',
                '#'
        };
        char ch;

        printf("Input file name for copy: ");
        scanf("%s", file_name_input);

        printf("Input file copy: ");
        scanf("%s", file_name_output);
        printf("\n");

        if ((p_file_input = fopen(file_name_input, "rb")) == NULL) {
                printf("Can't open %s for reading.\n", file_name_input);
                exit(EXIT_FAILURE);
        }

        if ((p_file_output = fopen(file_name_output, "wb")) == NULL) {
                printf("Can't open %s for reading.\n", file_name_input);
                exit(EXIT_FAILURE);
        }
        
        for (int r = 0; r < ROWS; ++r) {
            
                for (int c = 0; c < COLS; ++c) {
                        ch = getc(p_file_input);

                        if (ch == '\n') {
                                break;
                        }
                        picture[r][c] = ch;
                        getc(p_file_input);
                }
        }
        fclose(p_file_input);

        
        for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLS; j++) {
                        int x = picture[i][j] - '0';
                        putchar(digits[x]);
                        fprintf(p_file_output, "%c", digits[x]);

                }
                putchar('\n');
                fprintf(p_file_output, "%c", '\n');
        }
        fclose(p_file_output);
        
        return 0;
}
