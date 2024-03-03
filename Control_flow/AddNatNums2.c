#include <stdio.h>

/**
 * main - Find the sum of natural numbers
 *Return: Always 0 (success)
 */
int main(void)
{
	int num, i, sum = 0;

	do {
		printf("Enter only positive whole numbers: ");
		scanf("%d", &num);
	} while (num <= 0);

	i = 1;
	while (i <= num)
	{
		sum += i;
		++i;
	}

	printf("Sum = %d\n", sum);
	return (0);
}
