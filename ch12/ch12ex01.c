#include <stdio.h>

void critic(void);
int main(void) {
        int units = 0;
        printf("ft");
        scanf("%d", & units);
        
        while (units != 56) {
                critic();
        }
        
        printf("You know this!");
        return 0;
}

void critic(void) {
        printf("repit");
        scanf("%d", & units);
}
