#include <stdio.h>
#define ROWS 3
#define COLS 5
double a[ROWS][COLS];
double avg_rows[ROWS];
double avg_all[1];
double max_number[1];
void input(double a[ROWS][COLS], int x, int y);
void print_1d(double target2d[ROWS], int x);
void print_2d(double target2d[ROWS][COLS], int x, int y);
void print_result(void);
void average_every_rows(double a[ROWS][COLS], int x, int y, double avg_rows[ROWS]);
void average_all(double a[ROWS][COLS], int x, int y);
void max_num(double a[ROWS][COLS], int x, int y);
int main() {
	input (a, ROWS, COLS);
	print_2d(a, ROWS, COLS);
	average_every_rows(a, ROWS, COLS, avg_rows);
	average_all(a, ROWS, COLS);
	max_num(a, ROWS, COLS);
	print_result();
	return 0;
}
void print_result(void) {
	printf("    average all rows: \n");
	print_1d(avg_rows, ROWS);
	printf("    average all nums: \n");
	print_1d(avg_all, 1);
	printf("    max number: \n");
	print_1d(max_number, 1);
}
void input(double a[ROWS][COLS], int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j =0; j< y; j++) {
			scanf("%lf", &a[i][j]);
		}
		printf("\n");
	}
}
void print_2d(double target2d[ROWS][COLS], int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j =0; j< y; j++) {
			printf("%8.2lf", target2d[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void print_1d(double target2d[ROWS], int x) {
	for (int i = 0; i < x; i++) {
		printf("%8.2lf", target2d[i]);
	}
	printf("\n");
}
// 1 1 1 1 1   1 1 1 1 1   1 1 1 1 2
void average_every_rows(double a[ROWS][COLS], int x, int y, double avg_rows[ROWS]) {
	double sum;
	for (int i = 0; i < x; i++) {
		sum = 0;
		for (int j =0; j< y; j++) {
			sum +=a[i][j];
		}
		//printf("average %8.2lf", (sum / COLS));
		//printf("\n");
		avg_rows[i] = (sum / COLS);
	}
}
void average_all(double a[ROWS][COLS], int x, int y) {
	double sum = 0;
	for (int i = 0; i < x; i++) {
		for (int j =0; j< y; j++) {
			sum += a[i][j];
		}
		// printf("\n");
	}
	avg_all[0] = (sum / (COLS * ROWS));
}
void max_num(double a[ROWS][COLS], int x, int y) {
	double max_num = a[0][0];
	for (int i = 0; i < x; i++) {
		for (int j =0; j< y; j++) {
			if(max_num < a[i][j]) {
				max_num = a[i][j];
			}
		}
		// printf("\n");
	}
	max_number[0] = max_num;
}