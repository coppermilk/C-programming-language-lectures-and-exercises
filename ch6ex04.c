/******************************************************************************

Воспользуйтесь вложенными циклами, чтобы написать программу, которая выводит
следующую последовательность символов:

А
BC
DEF
GНIJ
KLMNO
PQRSTU

*******************************************************************************/
#include <stdio.h>
int pyramids = 8;
char start_letter = 'A';
int main()
{
    for (int i = 0; i < pyramids; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", start_letter++);
            
        }
        printf("\n");
        
    }
}
