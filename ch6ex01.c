/******************************************************************************

Напишите программу, которая создает массив из 26 элементов и помещает в
него 26 строчных букв английского алфавита. Также предусмотрите вывод содержимого этого массива.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char l = 'a';
    char letter_array[27];
    for (int i = 0; i < 26; i++){
        letter_array[i] = l + i;
       
    }
    for (int i; i < strlen(letter_array); i++){
        printf("%c", letter_array[i]);
    }
    

    return 0;
}
