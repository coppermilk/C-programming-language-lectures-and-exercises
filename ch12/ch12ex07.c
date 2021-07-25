#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice_rolls(int slides);

int main() {
        int number_of_dice_rolls;
        int slides, dice;
        printf("Input number of dice rolls; enter q to stop: ");
        while (scanf("%d", & number_of_dice_rolls) == 1) {
                printf("How many sides and how many dice? ");
                scanf("%d %d", & slides, & dice);
                srand(time(0));
                for (int i = 0; i < number_of_dice_rolls; ++i) {
                        int sum = 0;
                        for (int j = 0; j < dice; ++j) {
                                sum += dice_rolls(slides);

                        }
                        printf("%d ", sum);
                }

                printf("\nInput number of dice rolls: ");

        }

        printf("Bye");
        return 0;
}

int dice_rolls(int slides) {
        return 1 + rand() % slides;
}
