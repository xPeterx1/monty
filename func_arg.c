#include "monty.h"
int line = 0;
/**
 * func_arg - h
 * @argv: 1
 * Return: tree
*/
tree *func_arg(char **argv)
{
	char *buf;
	size_t n;
	int z;
	char **command;
	tree *list_inputs;
	FILE *sourcecode;

	list_inputs = NULL;
	buf = NULL;
	z = 0;
	sourcecode = fopen(argv[1], "r");

	if (sourcecode == NULL)
	{
		fclose(sourcecode);
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		z = _getline(&buf, &n, sourcecode);
		line++;
		if (z == -1)
		{
			free(buf);
			fclose(sourcecode);
			return (list_inputs);
		}
		if (!(blank_check(buf)))
		{
		command = tokenaizer(buf);
		if (command == NULL)
		{
		free(buf);
		return (NULL);
		}
		maketree(&list_inputs, command);

		}
	}
}
