/******************************************************************************

Напишите программу, которая запрашивает два числа с плавающей запятой и
выводит значение их разности, деленной на их произведение. Программа должна
обрабатывать пары вводимых чисел до тех пор, пока пользователь не введет
нечисловое значение.

*******************************************************************************/
#include <stdio.h>

float answer(float a, float b) {
    return (a - b) / (a * b);
}
int
main ()
{
  float a, b;
  printf ("Input two float nimber: ");
  scanf ("%f %f", &a, &b);
  printf ("Answer: %f", answer(a, b));


  return 0;
}


