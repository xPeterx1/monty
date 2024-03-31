#include "monty.h"
/**
 * _getline - h
 * @lineptr: 1
 * @n: 2
 * @stream: 3
 * Return: 9
*/
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	 size_t bufsize = 128;
	size_t pos = 0;
	int c = 0;

	if (lineptr == NULL || n == NULL || stream == NULL)
	{
		return (-1);
	}

	*lineptr = (char *)malloc(bufsize * sizeof(char));

	if (*lineptr == NULL)
	{
		return (-1);
	}
	while ((c = fgetc(stream)) != EOF)
	{
		if (pos >= bufsize - 1)
		{
			return (-1);
		}
		(*lineptr)[pos++] = (char)c;
		if (c == '\n')
		{
			break;
		}
	}

	if (pos == 0 && c == EOF)
	{
		free(*lineptr);
		*lineptr = NULL;
		return (-1);
	}

	(*lineptr)[pos] = '\0';
	*n = pos;
	return (pos);
}
