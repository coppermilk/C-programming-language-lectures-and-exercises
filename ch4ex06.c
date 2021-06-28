/******************************************************************************

Напишите программу, которая запрашивает имя пользователя и его фамилию.
Сделайте так, чтобы о на выводила введенные имена в одной строке и 
количество символов в каждом слове в следующей строке. Выровняйте 
каждое количество символов по окончанию соответствующего имени, как
показано ниже:

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[40], soname[40];
    int lenname, lensoname;
    printf("Input name and second name: ");
    scanf("%s %s", name, soname);
    printf("%s %s\n", name, soname);
    lenname = strlen(name);
    lensoname = strlen(soname);
    printf("%-*d %-*d", lenname, lenname ,lensoname, lensoname);

    return 0;
}

