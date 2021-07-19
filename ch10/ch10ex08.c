#include <stdio.h>
double copy_ptr(double* target2, double * source, int n);
int main() {
	double source[7] = {
		0, 1,  2, 3, 4, 5,  6
	}
	;
	double target2[3];
	copy_ptr(target2, source + 3, 3);
	return 0;
}
double copy_ptr(double * target2, double * source, int n) {
	for (int i = 0; i <n; ++i) {
		*(target2 + i) = *(source + i);
		printf("%-6.2lf", target2[i]);
	}
}