/******************************************************************************

Модифицируйте упражнение 8 так, чтобы программа использовала функцию
для возврата результатов вычислений.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int flag, a, b;
    printf("Input two integers number: ");
    flag = scanf("%d %d", &a, &b); 
    while (flag){
        int sum = 0;
        for (int i = a; i<=b; i++){
            sum = sum + i * i; 
           // printf ("%d", sum);
        }
        printf("The sum of the squares of integers from %d to %d is %d.\n",a*a, b*b, sum);
        flag = scanf("%d %d", &a, &b);
    }
    

    return 0;
}

