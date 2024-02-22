#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	char *buff;
	ssize_t reader;
	ssize_t finalread = 0;
	int fd = fileno(stream);

	*lineptr = malloc(sizeof(char) * n);

	if (*lineptr == NULL)
		return (-1);

	reader = read(fd, *lineptr, stdin);
	if (reader == EOF)
	{
		dprintf(STDERR_FILENO, "Error!, Couldn't read character\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		finalread += reader;
			if (finalread)
			{
				buff = realloc(*lineptr, n);
				if (buff == NULL)
				{
					free(*lineptr);
					return (-1);
				}
			}	*lineptr = buff;
	}
	return (finalread);
}		
