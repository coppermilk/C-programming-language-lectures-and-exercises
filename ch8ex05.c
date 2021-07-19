#include <stdio.h>
int maxg = 100;
int ming = 0;
char ch;
int main (void) {
    int guess = (maxg + ming) / 2;
    printf("Выберите целое число в интервале от 1 до 100. Я попробую угадать ");
    printf("его. \nНажмите клавишу у, если моя догадка верна и ");
    printf("\nклавишу n в противном случае.\n m если число больше, l если число меньше.");
    printf("Вашим числом является %d?\n", guess);
    while ((ch = getchar()) != EOF) {
        /* получить ответ, сравнить с у */
        if (ch == 'y') {
            printf("good");
        } else if (ch == 'm') {
            ming = guess;
        } else if (ch =='l') {
            maxg = guess;
        }
        guess = (maxg + ming) / 2;
        printf("Well, then, is it %d?\n", guess);
    }
    return 0;
}