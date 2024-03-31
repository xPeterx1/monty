#include "monty.h"
/**
 * push_check - hy
 * @name_function: 1
 * Return: 1
*/
int push_check(char *name_function)
{
	#define true 1
	#define false 0
	int i;
	int lenght1;
	int lenght2;
	char *name;

	name = "push";
	lenght1 = strlen(name);
	lenght2 = strlen(name_function);
	if (lenght1 != lenght2)
	return (0);
	for (i = 0; i < lenght1  && name[i] == name_function[i]; i++)
	{
		continue;
	}
	if (i == lenght1)
	return (true);
	else
	return (false);

}
