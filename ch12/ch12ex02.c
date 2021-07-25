#include <stdio.h>

int main() {
        int mode;
        double distanse, fuel;
        printf("Введіте 0 для метрического режима или 1 для американского режима: ");
        while (scanf("%d", & mode) == 1) {
                if (mode < 0) {
                        break;

                } else if (mode == 0) {

                        printf("Введите пройденное растояни в километрах: ");
                        scanf("%lf", & distanse);
                        printf("Ведите объем израсходованного топлава в литрах: ");
                        scanf("%lf", & fuel);
                        printf("Расход топлива состовляет %.2lf литров на 100 км", (fuel * 100) / distanse);

                } else if (mode == 1) {

                        printf("Введите пройденное растояни в милях: ");
                        scanf("%lf", & distanse);
                        printf("Ведите объем израсходованного топлава в галонах: ");
                        scanf("%lf", & fuel);
                        printf("Расход топлива состовляет %.2lf литров на 100 км", distanse / fuel);

                }
                printf("\nВведите 0 для метрического режима или 1 для американского режима (-1 для завершения): ");
                // scanf("%d", &mode);
        }

        return 0;
}
