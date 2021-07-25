#include <stdio.h>

#include <string.h>

#define SIZE 64

int main() {
        char ch;
        char str[SIZE];

        int in_world = 0;
        int j = 0; // world letter index
        for (int i = 0; i < SIZE; i++) {
                int strip_space = 0;
                ch = getchar();
                if (ch == ' ') {
                        if (in_world == 0) {
                                strip_space++;
                        } else if (in_world == 1) {
                                j++;
                                str[j] = '\0';
                                break;
                        }
                } else {
                        str[j] = ch;
                        in_world = 1;
                        j++;
                }
        }
        printf("%s", str);
        return 0;
}
