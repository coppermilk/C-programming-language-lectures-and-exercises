/******************************************************************************

Напишите программу, которая создает восьмиэлементный массив типа int и помещает 
в него элементы начальных восьми степеней 2, а затем выводит полученные 
значения. Применяйте цикл for для вычисления элементов массива, и ради 
разнообразия для отображения значений воспользуйтесь циклом do while.

*******************************************************************************/
#include <stdio.h>

int num_array[8];
int result = 2;

int
power(int base, int exponent) {
  int result = 1;
  for (exponent; exponent > 0; exponent--) {
    result = result * base;
  }
  return result;
}

int main() {
  int k = 0;


    for (int i = 0; i < 8; i++) {
      printf("%i\n", power(2, i));
      num_array[i] = power(2, i);
      int k = 0;
    }
  
  while (k < 8); {
    printf("%d", num_array[k]);
    //printf("k = %d\n", k);
    k++;
  }
  return 0;
}
