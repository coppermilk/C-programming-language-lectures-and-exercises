/******************************************************************************

Взгляните на следующие две бесконечных последовательности:
1.0 + 1.0/2.0 + 1.0/3.О + 1.0/4.0 +…
1.0 — 1.0/2.0 + 1.0/3.0 — 1.0/4.0 +…
Напишите программу, которая подсчитывает промежуточные суммы этих двух
последовательностей до тех пор, пока не будет обработано заданное количество
элементов. Подсказка: произведение нечетного количества значений -1 равно -1,
а произведение четного количества значений -1 равно 1. Предоставьте пользователю
возможность вводить предел интерактивно; нулевое или отрицательное значение должно
завершать ввод. Просмотрите промежуточные суммы для 100, 1000 и 10,000 
элементов. Сходятся л и эти последовательности к какому-то значению?

*******************************************************************************/
#include <stdio.h>
int koef;
double sumseq1 = 0.0;
double sumseq2 = 0.0;

int iteratin = 1000; 
int main()

{
    int k = 0;
    while (k < iteratin){
    for (int j = 1; j < iteratin; j++){
       
       
       sumseq1  = sumseq1 +  (1.0 / j);
       
       //printf(" j = %d, %lf\n", j ,  (1.0 / j));
   }
   // printf("%lf\n", sumseq1);
    
    
   for (int i = 1; i < iteratin; i++){
       
       if (i % 2 != 0){
         koef = -1;  
       }
       else{
           koef = 1;
       }
       //printf("%d", i* koef);
       sumseq2  = sumseq2 + koef * (1.0 / i);
       
       //printf(" i = %d, %lf\n",i , koef * (1.0 / i));
   }
   printf("%lf\n", sumseq2 + sumseq1);
    k++;
        
    }
}
