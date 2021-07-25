#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
        int num_array[SIZE];
        srand(time(0));
        for (int i = 0; i < SIZE; i++) {
                num_array[i] = rand() % 11;
                printf("%d ", num_array[i]);
        }
        printf("\n");

        for (int j = 0; j < SIZE - 1; j++) {
                {
                        for (int k = 0; k < SIZE - 1 - j; k++) {
                                if (num_array[k] > num_array[k + 1]) {
                                        int tmp = num_array[k];
                                        num_array[k] = num_array[k + 1];
                                        num_array[k + 1] = tmp;
                                }
                        }
                }
        }

        for (int m = 0; m < SIZE; m++) {

                printf("%d ", num_array[m]);
        }
        return 0;
}
