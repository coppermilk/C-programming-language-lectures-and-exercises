#include <stdio.h>
#define ROWS 3
#define COLS 5
void print_2d(int target2d[ROWS][COLS], int x, int y);
void multiply_to_2(int arr[ROWS][COLS], int x, int y);
int main() {
	int arr[ROWS][COLS] = { {
			1, 2, 3, 4, 5
		}
		, {
			0, 1, 2, 3, 4
		}
		, {
			4, 3, 2, 1, 0
		}
		,
	}
	;
	multiply_to_2(arr, ROWS, COLS);
	print_2d(arr, ROWS, COLS);
	return 0;
}
void multiply_to_2(int arr[ROWS][COLS], int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j =0; j< y; j++) {
			arr[i][j] *= 2;
		}
	}
}
void print_2d(int arr[ROWS][COLS], int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j =0; j< y; j++) {
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}
}