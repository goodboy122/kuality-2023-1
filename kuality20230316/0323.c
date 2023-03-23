#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
int main() {
	int num1, num2, num3 = 0;
	char ch;
	scanf(" %d %c %d", &num1, &ch, &num2);
	/*switch (ch) {
	case '+':
		num3 = num1 + num2;
		break;
	case '-':
		num3 = num1 - num2;
		break;
	case '*':
		num3 = num1 * num2;
		break;
	case '/':
		num3 = num1 / num2;
		break;
	default:
		printf("error");
	}*/
	if (ch == '+')
		num3 = num1 + num2;
	else if (ch == '-')
		num3 = num1 - num2;
	else if (ch == '*')
		num3 = num1 * num2;
	else if (ch == '/')
		num3 = num1 / num2;
	else
		printf("error");
	printf("%d %c %d  = %d\n", num1, ch, num2, num3);
}