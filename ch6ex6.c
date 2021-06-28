/******************************************************************************

 Напишите программу для вывода таблицы, в каждой строке которой представлено 
 целое число, его квадрат и его куб. Запросите у пользователя верхний и нижний 
 пределы таблицы. Используйте цикл for.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num_1, num_2; 
    printf("Input first and second number: ");
    scanf("%d %d", &num_1, &num_2);
   
    printf("+--------+--------+--------+\n");
    printf("|  num   |  num^2 | num^3  |\n");
    printf("+--------+--------+--------+\n");
for (int i = num_1; i <= num_2; i++){
    printf("| %6d | %6d | %6d |\n", i, i * i, i*i*i);
}
printf("+--------+--------+--------+\n");
    return 0;
}
