#include <stdio.h>

#define LEN 100

int main(int argc, char * argv[]) {
        char ch;
        char file_name[LEN];
        FILE * file_input;
        for (int i = 1; i < argc; i++) {

                if ((file_input = fopen(argv[i], "rb")) == NULL) {
                        printf("Can't open %s for reading.\n", argv[i]);
                        
                } else {

                        //printf("_________%s_________\n", argv[i]);

                        while ((ch = getc(file_input)) != EOF) {
                                putchar(ch);

                        }
                        fclose(file_input);
                }
                printf("\n");
        }
        return 0;
}
