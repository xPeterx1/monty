#include "monty.h"
int line = 0;
tree *func_arg(char **argv)
{
	char *buf;
	size_t n;
	int z;
	char **command;
	tree *list_inputs;

	list_inputs = NULL;
	buf = NULL;
	z = 0;
	int val;

	FILE *sourcecode = fopen(argv[1], "r");
	if (sourcecode == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}

	while (1)
	{

		
		z = getline(&buf, &n, sourcecode);
		line++;

		if (z == -1)
		{
			fclose(sourcecode);
			return (list_inputs);
		}
		

		val = blank_check(buf);
		if (!(blank_check(buf)))
		{
		//printf("enterd with value %d\n", line);
		command = tokenaizer(buf);
		maketree(&list_inputs, command);
		}
		
	}
}
