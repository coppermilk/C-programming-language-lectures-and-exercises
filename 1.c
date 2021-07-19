/******************************************************************************

8

*******************************************************************************/
#include <stdio.h>
#include <string.h>
char * string_in( char * str,char *sub);
int main()
{
    char str[] = "Время всегда хорошее!";
    char sub[] = "Время";
    string_in(str, sub);
    

    return 0;
}

char *string_in(char *str, char *sub){
     if (strstr(str, sub) == NULL){
        fprintf(stdout, "'%s' не найдено в строке '%s'", sub, str);
    }
    else{
        fprintf(stdout, "'%s' было найдено в строке '%s' по адрессу %p", sub, str, strstr(str, sub));
    }
}