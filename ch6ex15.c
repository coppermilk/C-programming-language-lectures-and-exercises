/******************************************************************************

Напишите программу, которая читает строку ввода, а затем выводит ее в обратном 
порядке. Ввод можно сохранять в массиве значений типа char; предполагается, что 
строка состоит не более чем из 255 символов. Вспомните, что для чтения символа 
за раз можно применять функцию scanf () со спецификатором %с, а при нажатии 
клавиши генерируется символ новой строки (\n). 

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define STRLEN 255
char my_string[STRLEN];
int
main ()
{
  for (int i = 0; my_string[i++] != '\n' && i < STRLEN;)
    {
      scanf ("%c", &my_string[i]);
    }
 //printf ("%s", my_string);
  for(int j = 0; j < 255; j++){
      printf("%c", my_string[j]);
   }

  return 0;
}
