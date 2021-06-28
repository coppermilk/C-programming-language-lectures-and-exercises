/******************************************************************************

Дафна делает вклад в сумме $100 под простые 10%. (То есть ежегодный прирост 
вклада составляет 10% от первоначальной суммы.) Дейдра вкладывает $100 под 
сложные 5%. (Это значит, что ежегодное увеличение вклада составляет 5% от 
текущего баланса, включающего предыдущий прирост вклада.) Напишите программу, 
которая вычисляет, сколько нужно лет, чтобы сумма на счету Дейдры превзошла 
сумму на счету Дафны. Выведите также размеры обоих вкладов на тот момент.

*******************************************************************************/
#include <stdio.h>
float first_sum = 100.0;
float first_rate = 0.10;
float second_sum = 100.0;
float second_rate = 0.05;



float power(float base, float exponent){
float result=1.0;
for(exponent; exponent>0; exponent--){
result = result * base;
return result;
}}
int main()
{
    printf("+---+---------+----------+\n");
    printf("| # |  Dafna  |  Deydra  |\n");
    printf("+---+---------+----------+\n");
    for(int year  = 1; first_sum >= second_sum; year++){
        first_sum = first_sum + (100 * first_rate);
        second_sum = second_sum * (1.0 + second_rate);
   
        printf("|%2d |%8.2f | %7.2f  |\n", year, first_sum, second_sum);
    }
    printf("+---+---------+----------+\n");
    return 0;
}

