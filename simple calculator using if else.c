#include <stdio.h>

int main()
{
	float a, b;
	char op;

	printf("Enter the frist number:");
	scanf("%f", &a);
	getchar();
	printf("Enter the operation (+,-,*,/):");
	scanf("%c", &op);
	printf("Enter the second number:");
	scanf("%f", &b);
	printf("\n");

	if (op == '+')

		printf("%.2f+%.2f=%.2f", a, b, a + b);

	else if (op == '-')
		printf("%.2f-%.2f=%.2f", a, b, a - b);

	else if (op == '*')
		printf("%.2f×%.2f=%.2f", a, b, a * b);

	else if (op == '/')
		printf("%.2f÷%.2f=%.2f", a, b, a / b);

	else
		printf("Invalid input!");

	return 0;
}