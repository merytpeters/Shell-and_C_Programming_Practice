#include <stdio.h>

/**
 * main - Find the sum of natural numbers
 *Return: Always 0 (success)
 */
int main(void)
{
	int num, i, sum = 0;

	printf("Enter only positive whole numbers: ");
	scanf("%d", &num);

	for (i = 1; i <= num; ++i)
	{
		sum += i;
	}

	printf("Sum = %d\n", sum);
	return (0);
}
