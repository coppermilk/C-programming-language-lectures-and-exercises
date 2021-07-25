#include <stdio.h>

#define SIZE 5
void fill_array(char ar[SIZE], int size);

int main() {
        char ar[SIZE];
        fill_array(ar, SIZE);
        for (int i = 0; i < SIZE; i++) {
                putchar(ar[i]);
        }
        return 0;
}

void fill_array(char ar[SIZE], int size) {
        for (int i = 0; i < size; i++) {
                ar[i] = getchar();
        }

}
