#include <stdio.h>
#include <string.h>

void remove_space_from_str(char string[]);

int main() {
        char string[64] = "this is Sparta f";
        remove_space_from_str(string);
        printf("%s", string);
        return 0;

}

void remove_space_from_str(char string[]) {
        int len = strlen(string);
        int k = 0;
        char tmp_string[64];
        for (int i = 0; i < len; i++) {
                if (string[i] != ' ') {
                        tmp_string[k++] = string[i];
                }

        }
        strcpy(string, tmp_string);

}
