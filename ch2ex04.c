/******************************************************************************

Напишите программу, которая производит следующий вывод:
Он веселый молодец!
Он веселый молодец!
Он веселый молодец!
Никто не может это отрицать!

*******************************************************************************/
#include <stdio.h>

void jolly ()
{
  printf ("He's a cheerful fellow!\n");
}

void deny ()
{
  printf ("No one can deny it!\n");
}

int main ()
{
 jolly();
 jolly();
 jolly();
 deny();

  return 0;
}



