/******************************************************************************

Теперь модифицируйте программу из упражнения 5, чтобы она вычисляла сумму 
квадратов целых чисел. (Или, если вам гак больше нравится, программа 
должна вычислять сумму, которую вы получите, если в первый день вам 
заплатят $1, во второй день — $4, в третий день — $9 и т.д.) В языке С 
отсутствует функция возведения в квадрат, но, как вы знаете, 
квадрат числа n равен n*n.

*******************************************************************************/


/* addemup.c -- four kinds of statements */
#include <stdio.h>
int main (void)			/* finds sum of first 20 integers */
{
  int count, sum, num;		/* declaration statement */
  count = 0;			/* assignment statement */
  sum = 0;
  /* ditto */
  printf ("Input number: ");
  scanf ("%d", &num);
  while (count++ < num){		/* while */
    sum += count * count;
    }
    /* statement */
  printf ("sum = %d\n", sum);	/* function statement */
  return 0;
}

