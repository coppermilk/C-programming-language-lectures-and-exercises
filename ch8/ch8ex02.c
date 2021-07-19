#include <stdio.h>
#include <ctype.h>
char ch;
unsigned int char_in_line = 8;
int col_ctr = 1;
int main() {
    while((ch = getchar()) != EOF) {
        if (isprint(ch)) {
            printf("%3c %3d", ch, ch);
        }
        if (col_ctr % char_in_line == 0) {
            printf("\n");
        }
        col_ctr++;
    }
    return 0;
}