#include "monty.h"
/**
 * formatting - hy
 * @b: e
 * Return: 1
*/
char *formatting(char *b)
{
	int i, j;
	char *new;

	if (b == NULL)
	{
	return (NULL);
	}

	i = 0, j = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	if (b[i - 1] != '\n')
	{
		new = malloc(sizeof(char) * (i + 1));
		if (new == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < i + 1; j++)
	{
		new[j] = b[j];


	}
	return (new);
	}

	new = malloc(sizeof(char) * i);
	if (new == NULL)
		{
			return (NULL);
		}
	for (j = 0; j < i - 1; j++)
	{
		new[j] = b[j];

	}
	new[j] = '\0';
	return (new);
}
