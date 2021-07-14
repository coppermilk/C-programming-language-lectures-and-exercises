/******************************************************************************

Напишите и протестируйте функцию по имени larger_of () , которая заменяет
содержимое двух переменных double большим из их значений. Например, вызов
larger_of (х, у) присвоит переменным х и у большее из их значений.

*******************************************************************************/
#include <stdio.h>

double larger_of(double * x, double * y);
int main() {
    double x = 7.2;
    double y = 9.5;
    printf("%lf\n", larger_of( & x, & y));
    printf("%lf %lf", x, y);
    return 0;
}

double larger_of(double * x, double * y) {
    double max;

    return *x > * y ? ( * y = * x) : ( * x = * y);

}
