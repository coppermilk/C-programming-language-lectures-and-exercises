/******************************************************************************

Напишите протестируйте функцию, которая принимает в качестве аргументов
адреса трех переменных double и помещает наименьшее значение в первую переменную,
среднее значение — во вторую, а наибольшее значение — в третью.

*******************************************************************************/
#include <stdio.h>

int sorted_double(double * a, double * b, double * c);
int main() {
    double a, b, c;

    printf("a = ");
    scanf("%lf", & a);
    printf("b = ");
    scanf("%lf", & b);
    printf("c = ");
    scanf("%lf", & c);

    sorted_double( & a, & b, & c);
    printf("%lf, %lf, %lf\n", a, b, c);
    return 0;
}
int sorted_double(double * a, double * b, double * c) {
    double tmp;
    if ( * a > * c) {
        tmp = * a;
        * a = * c;
        * c = tmp;
    }
    if ( * a > * b) {
        tmp = * a;
        * a = * b;
        * b = tmp;
    }
    if ( * b > * c) {
        tmp = * b;
        * b = * c;
        * c = tmp;
    }

    return 0;
}
