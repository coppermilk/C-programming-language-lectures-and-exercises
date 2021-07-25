#include <stdio.h>

int num_of_self_native_calls(void);

int main() {
        for (int i = 0; i < 100; i++) {
                printf("%d calls\n", num_of_self_native_calls());
        }

        return 0;
}

int num_of_self_native_calls(void) {
        static unsigned int calls = 0;
        return calls++;
}
