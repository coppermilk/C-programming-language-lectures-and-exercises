/******************************************************************************

Напишите программу, которая запрашивает ввод числа типа double и выводит 
значение куба этого числа. Для этого используйте собственную функцию, 
которая возводит значение в куб и выводит полученный результат. 
Программа main () должна передавать этой функции вводимое значение.

*******************************************************************************/
#include <stdio.h>

double num;
int cube(double x){
    x = x * x * x;
    return x;
}
int main()
{
    printf("Input number: ");
    scanf("%lf", &num);
    num = cube(num);
    printf("%lf", num);
    

    return 0;
}

