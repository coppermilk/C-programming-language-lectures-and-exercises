/******************************************************************************

 Напишите программу, которая преобразует время в минутах в часы и минуты. Для
 значения 60 создайте символическую константу посредством #define или const.
 Используйте цикл while, чтобы обеспечить пользователю возможность повторного
 ввода значений и для прекращения цикла, если вводится значение времени, 
 меньшее или равное нулю.

*******************************************************************************/
#include <stdio.h>
#define MIN_IN_HOUR 60

int minutes, hour, first_num_mintes, second_num_minutes;
int main () {
printf ("Enter minutes: ");
scanf ("%d", &minutes);

while (minutes > 0)
  {
    hour = minutes / MIN_IN_HOUR;
    first_num_mintes = (minutes / 10) % (MIN_IN_HOUR / 10);
    second_num_minutes = (minutes % MIN_IN_HOUR) % 10;
    printf ("Timer: %d:%d%d\n", hour, first_num_mintes, second_num_minutes);
    printf("Enter second to transfer them to minites:\n(to finish enter 0) ");
    scanf ("%d", &minutes);
  }

return 0;
}
