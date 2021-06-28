/******************************************************************************

Напишите программу, которая читает целые числа до тех пор, пока не встретится
число 0. После прекращения ввода программа должна сообщить общее количество
введенных четных целых чисел (за исключением 0), среднее значение
введенных четных целых чисел, общее количество введенных нечетных целых
чисел и среднее значение нечетных чисел.

*******************************************************************************/
#include <stdio.h>
int num; 
int even_num_ctr, odd_num_ctr; 
int sum_even_num, sum_odd_num;
even_num_ctr = 0;
odd_num_ctr = 0;
sum_even_num = 0;
sum_odd_num = 0;
float avg_even, avg_odd;
int main()
{
    while((scanf("%d", &num)) != 0){
        if (num == 0){
            break;
        }
        else{
            if (num % 2 == 0){
                even_num_ctr++;
                sum_even_num = sum_even_num + num;
            }
            else{
                odd_num_ctr++;
                sum_odd_num = sum_odd_num + num;
            }
        }
       
    }
    avg_even = sum_even_num / even_num_ctr; 
    avg_odd = sum_odd_num / odd_num_ctr;
printf("ctr even num %d,avg even num %.2f,ctr odd num %d, avg odd num %.2f", even_num_ctr,avg_even, odd_num_ctr, avg_odd);
    return 0;
}

