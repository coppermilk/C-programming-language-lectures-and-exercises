#include <stdio.h>
#include <ctype.h>
#include <string.h>

char c;

int main(int argc, char * argv[]) {
        if (argc == 1 || (argc == 2 && strcmp(argv[1], "-p")) == 0) {
                while (c = getchar() != EOF)
                        putchar(c);
        }

        if (strcmp(argv[1], "-l") == 0) {
                while ((c = getchar()) != EOF)

                        putchar(tolower(c));

        } else if (strcmp(argv[1], "-u") == 0) {

                while ((c = getchar()) != EOF)
                        putchar(toupper(c));

        } else {

                printf("Argument \"%s\" not valid.\n", argv[1]);
        }

        return 0;
}
