/******************************************************************************

Напишите программу, которая читает восемь целых чисел в массив, после чего
выводит их в обратном порядке.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define num_count 8
int array_num[num_count];
int main()
{
   for (int i = 0; i < num_count; i++ ){
       scanf("%d", &array_num[i]);
   }
   int size = sizeof(array_num)/sizeof(array_num[0]);
   for (int i = size - 1; i >= 0; i--){
       printf("%d", array_num[i]);
   }
    return 0;
}

