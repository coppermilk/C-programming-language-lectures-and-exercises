#include <stdio.h>
int max_double(int n, int const array[]);
int main() {
	int const array[] = {
		1.1, 2.2, 5.3, 9.4, 42.5, 11.4, 7.8
	}
	;
	printf("Largest value index %d", max_double(7, array));
	return 0;
}
int max_double(int n, int const array[n]) {
	int max = array[0];
	int max_i = 0;
	for (int i = 0; i < n; i++) {
		if(max < array[i]) {
			max = array[i];
			max_i = i;
		}
	}
	return max_i;
}