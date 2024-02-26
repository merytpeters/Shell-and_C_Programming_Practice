#include <stdio.h>
#include <ctype.h>

/**
 * main - Find the largest among three numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	double a, b, c;

	printf("Enter three numbers: ");
	scanf("%lf %lf %lf", &a , &b, &c);

	if (a > b && a > c)
		printf("Largest number: %lf\n", a);
	else if (b > a && b > c)
		printf("Largest number: %lf\n", b);
	else
		printf("Largest number: %lf\n", c);

	return (0);
}
