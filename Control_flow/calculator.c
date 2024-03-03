#include <stdio.h>

/**
 * main - Simple calculator
 *Return: Always 0 (success)
 */
int main(void)
{
	double operand1, operand2;
	double sum;
	char op;

	printf("Enter 1st operand: ");
	scanf("%lf", &operand1);
	printf("Enter an operator: ");
	scanf(" %c", &op);
	printf("Enter 2nd operand: ");
	scanf("%lf", &operand2);

	switch (op)
	{
	case '+':
		sum = operand1 + operand2;
		printf("%.2lf\n", sum);
		break;
	case '-':
		sum = operand1 - operand2;
		printf("%.2lf\n", sum);
		break;
	case '/':
		sum = operand1 / operand2;
		printf("%.2lf\n", sum);
		break;
	case '*':
		sum = operand1 * operand2;
		printf("%.2lf\n", sum);
		break;
	default:
		printf("Error! operator not found");
	}

	return (0);
}
