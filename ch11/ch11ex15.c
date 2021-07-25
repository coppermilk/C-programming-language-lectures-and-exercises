#include <stdio.h>
#include <ctype.h>
#include <string.h>

int myatoi(char string[]);
int power(int a, int n);
int main() {
        char string[] = "176789";
        printf("%d - this is int or 0", myatoi(string));

        return 0;
}

int myatoi(char string[]) {
        int len = strlen(string);
        int num[len];
        int return_num = 0;
        for (int j = 0; j <= len - 1; j++) {
                //putchar(string[j]);
                if (isdigit(string[j])) {
                        num[j] = string[j];
                } else {
                        return 0;
                }

        }
        for (int k = 0; k <= len - 1; k++) {
                int current_num = num[k];
                //printf("k = %d ", k);
                //printf("current num %d ", current_num - '0');
                //printf("_%d_ ", len- 1 - k);
                //printf("*%d*\n", power(10, len -1 - k - 1 ));
                return_num = return_num + (current_num - '0') * power(10, len - 1 - k);
        }
        return return_num;
}

int power(int a, int n) {
        if (n == 0) {
                return 1;
        }
        if (n < 0) {
                return power(1 / a, -n);

        }
        if (n % 2) {
                return a * power(a, n - 1);
        }
        return power(a * a, n / 2);
}
