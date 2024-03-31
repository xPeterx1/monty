#include "monty.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}

	tree *command;

	command = func_arg(argv);
	//printf("lines equal %i\n", command->next->line);
	functions_execution(command);

}
//STRTOK OVERUSE