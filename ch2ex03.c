/******************************************************************************

 Напишите программу, которая преобразует ваш возраст в полных годах в 
 количество дней и отображает на экране оба значения. Не обращайте внимания на
 високосные годы.

*******************************************************************************/
#include <stdio.h>
const int DAY_IN_YEARS = 365;
int years;
int main ()
{
  printf ("My age: ");
  scanf (" %d", &years);
  printf ("My day age is %d days.\n", years * DAY_IN_YEARS);
  printf ("By the way, a person lives on average about 30 thousand days.\n");
  printf ("Don't live a single day without doing something good and useful!");

  return 0;
}

