#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define COUNT 1000

int main() {
        int j;
        int count_arr[11];
        memset(count_arr, 0, sizeof(count_arr));

        for (int i = 0; i < COUNT; i++) {
                j = 1 + rand() % 11;
                count_arr[j] += 1;
                //printf("%d ", j);

        }

        for (int j = 1; j < 11; j++) {
                printf("%d cout: %d\n", j, count_arr[j]);
        }
        return 0;
}
