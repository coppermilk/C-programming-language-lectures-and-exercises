#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main() {
        int * pa;
        int size;
        int value;
        
        printf("Введіт количество элементов: ");
        
        while (scanf("%d", & size) == 1 && size > 0) {
                printf("Введите значение инициализации: ");
                scanf("%d", & value);
                pa = make_array(size, value);
                if (pa) {
                        show_array(pa, size);
                        free(pa);
                }
                printf("Введите количество элементов (-1 дла завершения)");
        }
        
        printf("Программа завершена");

        return 0;
}

int * make_array(int elem, int val) {
        int * pa = (int * ) malloc(elem * sizeof(int));
        //memset (pa, val, sizeof (int) * elem);
        
        for (int i = 0; i < elem; i++) {
                pa[i] = val;
        }

        return pa;
}

void show_array(const int ar[], int n) {
        for (int i = 0; i < n; i++) {
                printf("%d ", ar[i]);
        }
}
