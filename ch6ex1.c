/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char l = 'a';
    char letter_array[27];
    for (int i = 0; i < 26; i++){
        letter_array[i] = l + i;
       
    }
    for (int i; i < strlen(letter_array); i++){
        printf("%c", letter_array[i]);
    }
    

    return 0;
}
