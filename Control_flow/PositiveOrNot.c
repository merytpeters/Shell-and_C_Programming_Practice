#include <stdio.h>

/**
 *main - Check if a number is positive or negatve
 *Return: Always 0.
 */
int main(void)
{
	double i;

	printf("Enter number: ");
	scanf("%lf", &i);

	if (i == 0)
		printf("%lf is zero\n", i);
	else
	{
		if (i < 0)
			printf("%lf is a negative number.\n", i);
		else
			printf("%lf is a positive number.\n", i);
	}

	return (0);
}
