#include <stdio.h>

/**
 * main - Finds quotient and remainder
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, quotient , remainder;

	printf("Enter dividend: ");
	scanf("%d", &a);
        printf("Enter divisor: ");
	scanf("%d", &b);

	quotient = a / b;
	remainder = a % b;
	
	printf("%d\n", quotient);
	printf("%d\n", remainder);
	return (0);
}
