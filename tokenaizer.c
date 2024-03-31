#include "monty.h"
/**
 * tokenaizer - hy
 * @string: h
 * Return: 1
*/
char **tokenaizer(char *string, FILE *source)
{
	char *res1;
	char *res2;
	char **command;

	if (string == NULL)
	{
	fclose(source);
	return (NULL);
	}
	command = malloc(sizeof(res1) * 2);
	if (command == NULL)
	{
	free(string);
	fclose(source);
	fprintf(stderr, "Error: malloc failed");
	exit(EXIT_FAILURE);
	}

	res1 = strtok(string, " ");
	res1 = formatting(res1);
	res2 = NULL;
	if (push_check(res1))
	{
		res2 = strtok(NULL, " ");
		if (res2 == NULL)
		{
			free(command);
			free(string);
			fclose(source);
			fprintf(stderr, "L%d: usage: push integer\n", line);
			exit(EXIT_FAILURE);
		}
		res2 = formatting(res2);
		if (arg_check(res2))
		{
			free(command);
			free(string);
			fclose(source);
			fprintf(stderr, "L%d: usage: push integer\n", line);
			exit(EXIT_FAILURE);
		}
		command[0] = res1;
		command[1] = res2;
	}
	else
	{
		 command[0] = res1;
		 command[1] = res2;
	}
	if (command[0] == NULL && command[1] == NULL)
	return (NULL);
	return (command);

}
