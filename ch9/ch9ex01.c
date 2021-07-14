/******************************************************************************

Напишитефункцию по имени nin (х, у), которая возвращает меньшее из двух
значений double. Протестируйте эту функцию с помощью простого драйвера.

*******************************************************************************/
#include <stdio.h>
double x, y;
double min(double, double);

int main()
{
    printf("Enter another pair of numbers (q to quit): ");
    while(scanf("%lf %lf", &x, &y) == 2){
        
        printf("Min numbers is %lf\n", min(x, y));
        printf("Enter another pair of numbers (q to quit): ");
    }
    return 0;
}
double min(double x, double y){
    return x > y ? x : y;
}

