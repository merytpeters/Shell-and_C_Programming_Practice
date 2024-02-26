#include <stdio.h>

/**
 * main - Checks for leap year
 *Return: Always 0.
 */
int main(void)
{
	int year;

	printf("Enter the year: ");
	scanf("%d", &year);

	if (year % 2 == 0)
	{
		if (year % 4 == 0)
			printf("%d is a leap year\n", year);
		else
			printf("%d is two years from a leap year\n", year);
	}
	else
		printf("%d is not a leap year\n", year);

	return (0);
}
