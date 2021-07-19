#include <stdio.h>
int max_int(int n, int const array[]);
int main() {
	int const array[] = {
		1, 2, 5, 9, 42, 11, 7
	}
	;
	printf("Largest value %d", max_int(7, array));
	return 0;
}
int max_int(int n, int const array[n]) {
	int max = array[0];
	for (int i = 0; i < n; i++) {
		if(max < array[i]) {
			max = array[i];
		}
	}
	return max;
}