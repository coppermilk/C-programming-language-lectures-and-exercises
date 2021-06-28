/******************************************************************************

Напишите программу, которая читает входные данные до тех пор, пока не 
встретится символ #, а затем отображает количество прочитанных пробелов,
количество символов новой строки и количество всех остальных символов.

*******************************************************************************/
#include<stdio.h>

int ctr_n, ctr_spase, ctr_symbol;
ctr_n = 0;
ctr_spase =  0;
ctr_symbol = 0;
char ch;
int main()

{
while((ch = getchar()) != '#'){
switch (ch){
case '\n' : ctr_n++;
break;
case  ' ': ctr_spase++;
break;
default : ctr_symbol++;

}
}

    printf("New line: %d, spase: %d, other: %d",ctr_n, ctr_spase, ctr_symbol);
    return 0;
}