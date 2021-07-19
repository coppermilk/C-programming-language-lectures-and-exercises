#include <stdio.h>
void sum_i_array(int a[], int b[], int s[], int size);
int main()
{
    int a[4] = {1, 2, 3, 4};
    int b[4] = {1, 2, 3, 4};
    int s[4];
    int len = sizeof(a) / sizeof(b[0]);
    sum_i_array(a, b, s, len);
    return 0;
}

void sum_i_array(int a[], int b[], int s[], int size){
    for (int i = 0; i<size; i++){
        s[i] = a[i] + b[i];
        //printf("%d ", s[i]);
    }
}
