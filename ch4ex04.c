/******************************************************************************

Напишите программу, которая запрашивает рост в дюймах и имя, после чего 
отображает полученную информацию в следующей форме:
Ларри, ваш рост составляет 6.208 футов

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Input your height and Name: ");
    float height;
    char name[40];
    scanf("%f %s", &height, name);
    printf("%s, your height is %.2f m.",name, height / 100);

    return 0;
}

