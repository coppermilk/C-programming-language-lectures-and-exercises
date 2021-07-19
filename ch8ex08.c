/******************************************************************************
Задача: Напишите программу, которая выводит на экран меню, предлагающее выбрать сложение, вычитание, умножение или деление. После выбора программа должна запросить два числа и затем выполнить затребованную операцию.Программа должна принимать только варианты, предлагаемые в меню. чисел должен использоваться тип float и программа должна предоставлять пользователю возможность повторно вводить числа, если он ввел нечисловые данные. В случае деления программа должна предложить пользователю ввести другое значение, если он ввел для второго операнда
значение О. Выполнение такой программы должно иметь примерно такой вид:
Выберите желаемую операцию:
с. сложение в. вычитание
у. умножение д. деление
з. завершение
с
Введите первое число: 22.4
Введите второе число: о^ дин
один не является числом.
Введите число, такое как 2.5, -1.78Е8 или 3: 1
22.4 + 1 = 23.4
Выберите желаемую операцию:
с. сложение в. вычитание
у. умножение д. деление
з. завершение
д
Введите первое число: 18.4
Введите второе число: О
Введите число, отличное от О: 0.2
18.4 / 0.2 = 92
Выберите желаемую операцию:
с. сложение в. вычитание
у. умножение д. деление
з. завершение
s
Программа завершена.
*******************************************************************************/
#include <stdio.h>
float get_first_num() {
	float num;
	char ch;
	printf("Enter first number: ");
	while ((scanf("%f", & num)) != 1) {
		while ((ch = getchar()) != '\n') {
			putchar(ch);
		}
		printf(" is not a number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}
	return num;
}
float get_second_num(char choise) {
	float num;
	char ch;
	printf("Enter second number: ");
	while ((scanf("%f", & num)) != 1) {
		while ((ch = getchar()) != '\n') {
			putchar(ch);
		}
		printf(" is not a number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}
	if (choise == 'd' && num == 0) {
		printf("Can\'t not be division on zero. Put enother num\n");
		get_second_num(choise);
	} else {
		return num;
	}
}
char get_first(void) {
	char ch;
	while ((ch = getchar()) != EOF) {
		if (ch != ' ') {
			//printf("returned %c", ch);
			return ch;
			//printf("%c", ch);
			break;
		}
	}
}
char get_choise() {
	char ch;
	ch = ' ';
	printf("Select the desired operation:\n");
	printf("a. addition             s. subtraction\n");
	printf("m. multiplication       d. division\n");
	printf("e. exit\n");
	while (1) {
		switch (ch = get_first()) {
			case 'a':
			    case 's':
			    case 'm':
			    case 'd':
			      break;
			case 'e':
			      printf("Bye.\n");
			exit(0);
			break;
			default:
			      printf("Select a, s, m, d, e: ");
			continue;
		}
		break;
	}
	return (ch);
}
void get_ans(char choise, float num1, float num2) {
	float ans;
	switch (choise) {
		case 'a':
		    ans = num1 + num2;
		printf("%.2f + %.2f = %.2f\n", num1, num2, ans);
		break;
		case 's':
		    ans = num1 - num2;
		printf("%.2f - %.2f = %.2f\n", num1, num2, ans);
		break;
		case 'm':
		    ans = num1 * num2;
		printf("%.2f * %.2f = %.2f\n", num1, num2, ans);
		break;
		case 'd':
		    ans = num1 / num2;
		printf("%.2f / %.2f = %.2f\n", num1, num2, ans);
		break;
	}
}
int main() {
	float num1, num2;
	char choise;
	choise = get_choise();
	num1 = get_first_num();
	num2 = get_second_num(choise);
	get_ans(choise, num1, num2);
	main();
	return 0;
}