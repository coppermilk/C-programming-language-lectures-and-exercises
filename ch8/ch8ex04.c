#include <stdio.h>
#include <ctype.h>
char ch;
int ctr_letter = 0;
int in_world = 0;
int ctr_worlds = 0;
float sum_all_letters = 0.0;
int main() {
    while((ch = getchar()) != EOF) {
        if(isalpha(ch)) {
            ctr_letter++;
            in_world = 1;
        } else {
            if (ctr_letter) {
                ctr_worlds++;
                sum_all_letters = sum_all_letters + ctr_letter;
            }
            in_world = 0;
            ctr_letter = 0;
        }
    }
    printf("Awerage letters in world: %.2f",  sum_all_letters / ctr_worlds);
    return 0;
}