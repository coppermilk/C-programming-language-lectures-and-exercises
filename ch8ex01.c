#include <stdio.h>
unsigned int num_ctr = 0;
int main() {
    while(getchar() != EOF) {
        num_ctr++;
    }
    printf("There are %u characters.\n", num_ctr);
    return 0;
}