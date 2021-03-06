/******************************************************************************

O??????? ??????? to_binary ( ) ?? ???????? 9.8 ?? ??????? to_base_n ( ) , ???????
????????? ?????? ???????? ? ????????? ?? 2 ?? 10. ? ? ? ?????? ????????
?????, ?????????? ? ?????? ?????????, ? ??????? ????????? ? ??????????, ???????
??????? ?? ?????? ?????????. ????????, ????? to_base_n (129,8) ??????
?????????? 201, ?.?. ???????????? ?????????? ????? 129. ????????????? ???????
? ? ? ? ? ? ? ? ?????-?????? ?????????.

*******************************************************************************/

#include <stdio.h>

double power(double n, int p);

int main(void) {
    double n;
    int p;
    printf("Enter two numbers: ");
    scanf("%lf %d", & n, & p);
    printf("pow(%f, %d) = %f\n", n, p, power(n, p));
    return 0;
}
double power(double x, long n)
{
    if(n == 0) return 1;
    if(n < 0) return power ( 1 / x, -n);
    if(n % 2) return x * power (x, n - 1);
    return power(x * x, n / 2);
}
