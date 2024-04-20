#include "main.h"
/**
 * _strlen - Number of char in a string
 * @s: String
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
