/******************************************************************************

Напишите программу, которая производит следующий вывод:
Бразилия, Россия, Индия, Китай
Индия, Китай,
Бразилия, Россия

*******************************************************************************/
#include <stdio.h>
int br()
{

    printf("Brazil, Russia");
}

int ic()
{
    printf("India, China");
}
int main()
{
    br();
    printf(", ");
    ic();
    printf("\n");
   
    ic();
    printf(",\n");
    
    br();
    printf("\n");

    return 0;
}

