/******************************************************************************

В языке С одна функция может вызывать другую. Напишите программу, которая 
вызывает функцию по имени one_three ( ) . Эта функция должна вывести слово 
“один» в одной строке, вызвать функцию two (), а затем вывести слово “три»
тоже в одной строке. Функция two () должна отобразить слово “два» в одной 
строке. Функция main () должна вывести слово “начинаем:» перед вызовом 
функции one_three () и слово “порядок!» после ее вызова. Таким образом,
выходные данные должны иметь следующий вид:
начинаем:

один
два
три
порядок!

*******************************************************************************/
#include <stdio.h>
int two ()
{
  printf ("Two\n");
}

int one_three ()
{
  printf ("One\n");
  two ();
  printf ("Tree\n");
}

int
main ()
{
  printf ("Start:\n");
  one_three ();
  printf ("Good!");
  return 0;
}

