#include "main.h"

/**
* _printf - Custom printf function
* @format: printf format argument
* Return: 0 Always on success
*/
int _printf(const char *format, ...)
{
	va_list formatList;
	int i, len = 0;

	va_start(formatList, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			format++;
			len++;
		}
		else if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				{
					char c = va_arg(formatList, int);

					write(1, &c, 1);
					len++;
					break;
				}
			case 's':
				{
					char *s = va_arg(formatList, char *);

					i = _strlen(s);
					write(1, s, i);
					len += i;
					break;
				}
			case '%':
				{
					write(1, "%", 1);
					len++;
					break;
				}
			default:
				len++;
				break;
			}
		}
	}
	va_end(formatList);
	return len;
}
