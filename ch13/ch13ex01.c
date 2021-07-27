#include <stdio.h>

#define LEN 100
int main() {

        char file_name[LEN];
        char ch;

        FILE * file_ptr;
        unsigned long count = 0;

        printf("Input file name: ");
        scanf("%s", file_name);
        file_ptr = fopen(file_name, "r+a");
        
        if (file_ptr != NULL) {
                printf("File %s open or create.\n", file_name);

                while ((ch = getc(file_ptr)) != EOF) {
                        putc(ch, stdout),
                                count++;
                }

        } else {
                fprintf(stderr, "Error create or open file");
                return 1;
        }

        fclose(file_ptr);
        printf("\nIn file %s %lu characters.", file_name, count);
        
        return 0;
}
