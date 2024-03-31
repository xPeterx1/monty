#include "monty.h"

char **tokenaizer(char *string)
{
	char *res1;
	char *res2;
	char **command;

	if (string == NULL)
	return (NULL);
	command = malloc(sizeof(res1) * 2);
	if (command == NULL)
	{
	fprintf(stderr, "Error: malloc failed");
	exit (EXIT_FAILURE);
	}

	res1 = strtok(string, " ");
	res1 = formatting(res1);
	res2 = NULL;
	if (push_check(res1))
	{
		res2 = strtok(NULL, " ");
		if (res2 == NULL)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			exit (EXIT_FAILURE);
		}
		res2 = formatting(res2);
		if (arg_check(res2))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			exit (EXIT_FAILURE);
		}
		command[0] = res1;
		command[1] = res2;
	}
	else
	{
		 command[0] = res1;
		 command[1] = res2;
	}
	return (command);

}
