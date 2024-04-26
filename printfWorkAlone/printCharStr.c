#include "main.h"

/**
 * print_char - Format specifier c
 * @formatList: Va list
 * @len: Length of char
 */
void print_char(va_list formatList, int *len)
{
	char c = va_arg(formatList, int);

	write(1, &c, 1);
	(*len)++;
}

/**
 * print_string - Format specifier s
 * @formatList: Va list
 * @len: Length of string
 */
void print_string(va_list formatList, int *len)
{
	int i = 0;
	char *s = va_arg(formatList, char *);

	i = _strlen(s);
	write(1, s, i);
	(*len) += i;
}

/**
 * print_percent - Format Specifier %
 * @len: length
 */
void print_percent(int *len)
{
	write(1, "%", 1);
	(*len)++;
}

/**
 * *print_percentAdd - Address of %
 * Return: Address of %
 */
const char *print_percentAdd(void)
{
	static const char percent = '%';

	return (&percent);
}
