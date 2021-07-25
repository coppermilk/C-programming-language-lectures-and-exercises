#include <stdio.h>

#include <ctype.h>

#define LENGTH 500

int main() {
        char string[LENGTH];
        char * pts;
        int in_world = 0;
        int lower = 0;
        int upper = 0;
        int punkt = 0;
        int digit = 0;
        int world = 0;
        while (fgets(string, LENGTH, stdin)) {
                pts = string;
                while ( * pts) {

                        if (isspace( * pts) && !in_world) {
                                world++;
                                in_world = 1;
                        } else if (isspace( * pts)) {
                                in_world = 0;
                        }

                        if (islower( * pts)) {
                                lower++;
                        }

                        if (isupper( * pts)) {
                                upper++;
                        }

                        if (ispunct( * pts)) {
                                punkt++;
                        }

                        if (isdigit( * pts)) {
                                digit++;
                        }

                        * pts++;
                }
        }
        printf("Words count: %d\n"
                "Lowercase letters: %d\n"
                "Uppercase letters: %d\n"
                "Punctuation characters: %d\n"
                "Number of digits: %d\n",
                world, lower, upper, punkt, digit);
        return 0;
}
