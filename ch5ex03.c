/******************************************************************************

Напишите программу, которая запрашивает у пользователя ввод количества
дней и затем преобразует это значение в количество недель и дней. Например,
18 дней программа должна преобразовать в 2 недели и 4 дня. Отображайте 
результаты в следующем формате:
18 дней составляют 2 недели и 4 дня.

*******************************************************************************/
#include <stdio.h>
int days;
int main ()
{
  printf ("Input days: ");
  scanf ("%d", &days);
  while (days > 0)
    {
      printf ("%d days is: %d week and %d days\n", days, days / 7, days % 7);
      printf ("Input days: (to finish enter 0)  ");
      scanf ("%d", &days);
    }

  return 0;
}
