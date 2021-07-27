#include <stdio.h>
#include <stdlib.h>

#define LEN 100
int read_line(FILE * file);

int main() {
        FILE * p_file_1, * p_file_2;
        char fille_name_1[LEN], fille_name_2[LEN];
        int end_file_1 = 0;
        int end_file_2 = 0;

        printf("Input first file: ");
        scanf("%s", fille_name_1);

        printf("Input second file: ");
        scanf("%s", fille_name_2);

        if ((p_file_1 = fopen(fille_name_1, "r")) == NULL) {
                printf("Error open file %s", fille_name_1);
                exit(EXIT_FAILURE);
        }
        if ((p_file_2 = fopen(fille_name_2, "r")) == NULL) {
                printf("Error open file %s", fille_name_2);
                exit(EXIT_FAILURE);
        }

        while (!end_file_1 && !end_file_2) {
                end_file_1 = read_line(p_file_1);
                end_file_2 = read_line(p_file_2);
        }
        if (!end_file_1) {
                while (!end_file_1) {
                        end_file_1 = read_line(p_file_1);
                }
        } else if (!end_file_2) {
                while (!end_file_2) {
                        end_file_2 = read_line(p_file_2);
                }
        }

        return 0;
}

int read_line(FILE * file) {
        char ch;
        if ((ch = getc(file)) != EOF) {
                putchar(ch);

                while ((ch = getc(file)) != EOF && ch != '\n') {
                        putchar(ch);
                }
                putchar('\n');
        }
        return (ch == EOF) ? 1 : 0;
}
