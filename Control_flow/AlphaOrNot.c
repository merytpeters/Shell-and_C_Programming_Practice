#include <stdio.h>
#include <ctype.h>

/**
 * main - Checks for an alphabet
 *Return: Always 0.
 */
int main(void)
{
	char a;

	printf("Enter character: ");
	scanf("%c", &a);

	if (!isalpha(a))
		printf("%d is not an alphabet.\n", a);
	else if ((a >= 'A' && a <= 'Z') || a >= 'a' && a <= 'z')
		printf("%c is an alphabet.\n", a);
	return (0);
}
