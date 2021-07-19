#include <stdio.h>
char ch;
char getfirst(void) {
	while((ch = getchar()) != EOF) {
		if (ch != ' ') {
			return ch;
			//printf("%c", ch);
			break;
		}
	}
}
int main() {
	ch = getfirst();
	printf("%c", ch);
}