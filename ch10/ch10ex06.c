void reverse(int size, double array[size]);
#include <stdio.h>
int main() {
	double array[7] = {
		1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7
	};
	
	int n = sizeof(array) /sizeof(array[0]);
	reverse(n, array);
	return 0;
}
void reverse(int size, double array[size]) {
	for (int i = 0; i < size / 2; ++i) {
		double tmp = array[i];
		array[i] =array[size - i -1];
		array[size - i - 1] = tmp;
	}
	
	for (int i = 0; i < size; i++) {
		printf("%lf\n", array[i]);
	}
}
