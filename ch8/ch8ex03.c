#include <stdio.h>
#include <ctype.h>
int upper = 0;
int lower = 0;
int else_char = 0;
char ch;
int main() {
    while((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            upper++;
        } else if (islower(ch)) {
            lower++;
        } else { else_char++;
        }
    }
    printf("\nUpper: %3d, \nlower: %3d, \nelse:  %3d", upper, lower, else_char);
    return 0;
}