#include <stdio.h>

double power(double a, int n);
int main() {
        double a;
        int n;
        scanf("%lf", & a);
        scanf("%d", & n);
        printf("%lf", power(a, n));

        return 0;
}

double power(double a, int n) {
        if (n == 0) {
                return 1;
        }
        if (n < 0) {
                return power(1 / a, -n);
        }
        if (n % 2) {
                return a * power(a, n - 1);
        }
        return power(a * a, n / 2);
}
