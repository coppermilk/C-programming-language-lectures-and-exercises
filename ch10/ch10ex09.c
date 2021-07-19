#include <stdio.h>
#define ROWS 5
#define COLS 3
void copy_arr(double target2d[], double source2d[], int y);
void copy_2d_arr(double target2d[ROWS][COLS], double source2d[ROWS][COLS], int x, int y);
void print_2d(double target2d[ROWS][COLS], int x, int y);
int main() {
	double source2d[ROWS][COLS] = { {
			1.1, 2.2, 3.3
		}
		, {
			4.4, 5.5, 6.6
		}
		, {
			4.4, 5.5, 6.6
		}
		, {
			4.4, 5.5, 6.6
		}
		, {
			7.7, 8.8, 9.9
		}
	}
	;
	double target2d[ROWS][COLS];
	copy_2d_arr(target2d, source2d, ROWS, COLS);
	print_2d(target2d, ROWS, COLS);
	return 0;
}
void copy_2d_arr(double target2d[ROWS][COLS], double source2d[ROWS][COLS], int x, int y) {
	for (int i = 0; i < x; ++i) {
		copy_arr(target2d[i], source2d[i], COLS);
	}
}
void copy_arr(double target1[], double source[], int y) {
	for (int i = 0; i < y; ++i) {
		target1[i] = source[i];
	}
}
void print_2d(double target2d[ROWS][COLS], int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j =0; j< y; j++) {
			printf("%8.2lf", target2d[i][j]);
		}
		printf("\n");
	}
}