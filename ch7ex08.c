
/******************************************************************************

Измените предположение а) в упражнении 7 так, чтобы программа предоставляла
меню с тарифными ставками. Для выбора тарифной ставки используйте оператор 
switch. После запуска программы вывод должен быть подобным по указанному ниже:

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
int num;
float ans;
float L1, L2, L3;
int main()
{
    printf("*********************************************************************\n");
  printf("Введите число, соответствующее желаемой тарифной ставке или действию\n :");
  printf("1) $ 8 .75/ч 2) $ 9 .33/ч\n");
  printf("3) $10.00/ч 4) $11.20/ч\n");
  printf("5) Выход\n");
  printf("*********************************************************************\n");
   while(scanf("%d", &num) == 1){
       //printf("%d\n", hours);
         
       if (num == 1){
           hours = 8.75;
       } else if (num == 2) {
           hours = 9.33;
       }
       else if (num == 3) {
           hours = 10.0;
       }
       else if (num == 4) {
           hours = 11.20;
       }
       else if (num == 5) {
           break;
       }
        printf("input hours:");
        scanf("%d", &hours);
       
       
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