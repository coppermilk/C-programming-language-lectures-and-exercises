#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
        char string[] = "1 22 3 4 595 6";
        int len = sizeof(string) / sizeof(string[0]);
        int w_end = 0;
        int tmp = 0;
        int prew_w_end = 0;
        
        for (int i = len; i >= 0; i--) {
                if (string[i] == ' ' || string[i] == '\0') {
                        tmp = w_end;
                        w_end = i;
                        prew_w_end = tmp;
                        //printf("end %d prew %d\n", w_end, prew_w_end);
                        int j = w_end;
                        
                        while (j < prew_w_end) {
                                putchar(string[j]);
                                j++;
                        }
                        //putchar(string[ip
                }
        }
        int index_first_space;
      
        for (int k = 0; k < len; k++) {
                if (string[k] == ' ' || string[k] == '\0') {
                        index_first_space = k;
                        break;
                }
        }
        
        for (int m; m < index_first_space; m++) {
                putchar(' ');
                putchar(string[m]);
        }
        
        return 0;
}
