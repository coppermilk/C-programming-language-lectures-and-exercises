/******************************************************************************

Напишите программу, которая выводит результаты применения операции деления 
по модулю. Пользователь должен первым ввести целочисленное значение,
которое используется в качестве второго операнда и остается неизменным.
Затем пользователь должен вводить числа, для которых будет вычисляться 
результат деления по модулю. Процесс должен прерываться вводом значения,
которое равно или меньше 0. Пример выполнения этой программы должен выглядеть 
следующим образом:
Эта программа вычисляет результаты деления по модулю.
Введите целое число, которое будет служить вторым операндом: 256
Теперь введите первый операнд: 438
438 % 256 равно 182
Введите следующее число для первого операнда (<= 0 для выхода из
программы): 1234567
1234567 % 256 равно 135
Введите следующее число для первого операнда (<= 0 для выхода из
программы): 0
Готово

*******************************************************************************/
#include <stdio.h>
int first, second;

int main()
{
    printf("This program calculates the results of modulo division.\n");
    printf("Enter an integer that will serve as the second operand: ");
    scanf("%d", &second);
    printf("Now enter the first operand: ");
    scanf("%d", &first); 
    while (first > 0)
    {
        printf("%d %% %d equally %d\n", first, second, first % second);
        printf("Enter the next number for the first operand (<= O to exit programs): ");
        scanf("%d", &first);
    }
    return 0;
}