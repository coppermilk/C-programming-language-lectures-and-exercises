/******************************************************************************

Напишитефункцию по имени chline (ch, i, j ), которая выводит требуемый
символ в столбцах с i по j. Протестируйте эту  функцию с помощью простого
драйвера.

*******************************************************************************/
#include <stdio.h>
char ch;
int x, y;
void chine(char ch, int x, int y);
int main()
{
    printf("Enter a character and two integers: ");
    while(scanf(" %c %d %d",&ch, &x, &y) == 3) {

        chine(ch, x, y);
        printf("Enter a character and two integers: ");
    }
}

void chine(char ch, int x, int y) {
    for (int i = x ; i > 0; i--) {
        for(int j = y; j > 0 ; j--) {
            putchar(ch);
        }
        putchar('\n');
    }
}

