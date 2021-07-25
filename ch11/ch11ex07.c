#include <stdio.h>
#include <string.h>

char * mystrncpy(char * s1, char * s2, int n);

int main() {
        char s1[80];
        char s2[80] = "12345";

        mystrncpy(s1, s2, 5);

        printf("%s\n", s1);
        strncpy(s1, s2, 5);
        printf("---%s", s1);

        return 0;
}

char * mystrncpy(char * s1, char * s2, int n) {
        for (int i = 0; i < n; i++) {
                s1[i] = s2[i];

        }
        s1[n] = '\0';
}
