/******************************************************************************

Напишите программу, которая запрашивает количество часов, отработанных за 
неделю, и выводит значения общей суммы начислений, налогов и чистой зарплаты.
Исходите из перечисленных ниже утверждений:

а. Основная тарифная ставка заработной платы = $10,00/час
б. Сверхурочные часы (превышающие 40 часов в неделю) = коэффициент 1,5
в. Налоговая ставка:
15% с первых $300;
20% со следующих $150;
25% с остатка.

*******************************************************************************/
#include <stdio.h>
#define DEFAULT_HOUR 40
#define SALARY_RATE 10
#define OVERTIME_COEF 1.5
#define L1_TAX 300
#define L2_TAX 150
#define L1_TAXRATE 0.15
#define L2_TAXRATE 0.20
#define L3_TAXRATE 0.25
int hours;
float ans;
float L1, L2, L3;
int main()
{
   while(scanf("%d", &hours) == 1){
       //printf("%d\n", hours);
       if (hours > DEFAULT_HOUR){
           ans = DEFAULT_HOUR * SALARY_RATE;
           ans = ans + (hours - DEFAULT_HOUR) * OVERTIME_COEF * SALARY_RATE;
       }
       else{
           ans = hours * SALARY_RATE;
       }
       if (ans <= L1_TAX){
           L1 = ans * ( 1 - L1_TAXRATE );
           ans = L1;
       }
       else if (ans > L1_TAX && ans <= L1_TAX + L2_TAX){
           L1 = L1_TAX * ( 1 - L1_TAXRATE );
           L2 = ((ans - L1_TAX) * (1 -L2_TAXRATE ));
           ans = L1 + L2;
       }
       else if (ans > L1_TAX && ans > L1_TAX + L2_TAX){
           
           L1 = L1_TAX * (1 - L1_TAXRATE );
           L2 = L2_TAX * (1 - L2_TAXRATE );
           L3 = (ans - L1_TAX - L2_TAX) * (0.75);
         
           ans = L1 + L2 + L3;
       }
       
       
       
       printf("%.2f\n", ans);
   }

    return 0;
}