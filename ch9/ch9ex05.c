/******************************************************************************

�������� � ������������� ������� �� ����� larger_of () , ������� ��������
���������� ���� ���������� double ������� �� �� ��������. ��������, �����
larger_of (�, �) �������� ���������� � � � ������� �� �� ��������.

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
