#include <stdio.h>

#include <string.h>

char string_reverce(char * string);
int main() {
        char string[64] = "This is Sparta";
        string_reverce(string);
        printf("%s", string);

        return 0;
}

char string_reverce(char * string) {
        int len = strlen(string);
        int start, end, tmp;
        for (start = 0, end = len - 1; start < end; start++, end--) {
                tmp = string[start];
                string[start] = string[end];
                string[end] = tmp;
        }

}
