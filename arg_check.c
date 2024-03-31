#include "monty.h"
/**
 * arg_check - hy
 * @argument: hy
 * Return: int
*/

int arg_check(char *argument)
{
	#define true 0
	#define false 1
	int i;
	int lenght;


	if (*argument == 0)
	{
		return (false);
	}

	lenght = strlen(argument);
	i = 0;
	if (argument[0] == '-')
	{
		i++;
	}
	while (i < lenght && argument[i] <= '9' && argument[i] >= '0')
	{
		i++;
	}

	if (i == lenght)
	return (true);
	else
	return (false);
}
