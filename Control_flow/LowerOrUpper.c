#include <stdio.h>
#include <ctype.h>

/**
 * main - Checks if an alphabet is lower or uppercase
 *Return: Always 0.
 */
int main(void)
{
	char a;

	printf("Enter character: ");
	scanf("%c", &a);

	if (!isalpha(a))
		printf("%d is not an alphabet.\n", a);
	else
	{
		if (a >= 'A' && a <= 'Z')
			printf("%c is an uppercase alphabet.\n", a);
		else if (a >= 'a' && a <= 'z')
			printf("%c is a lowercase alphabet.\n", a);
	}

	return (0);
}
