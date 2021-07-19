#include <stdio.h>
double max_double(int n, double const array[]);
int main() {
    double const array[] = {
        1.1, 2.2, 5.3, 9.4, 42.5, 11.4, 7.8
    }
    ;
    printf("Largest value index %lf", max_double(7, array));
    return 0;
}
double max_double(int n, double const array[n]) {
    double max = array[0];
    double min = array[0];
    for (int i = 0; i < n; i++) {
        if(max < array[i]) {
            max = array[i];
        }
        if (min >array[i]) {
            min = array[i];
        }
    }
    // printf("%lf %lf", min, max);
    return max - min;
}