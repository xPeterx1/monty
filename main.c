#include "monty.h"
/**
 * main - a
 * @argc: h
 * @argv: e
 * Return: 1
*/
int main(int argc, char **argv)
{
	tree *command;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	command = func_arg(argv);
	if (command == NULL)
	return (-1);
	functions_execution(command);
	free_tree(command);
	exit(EXIT_SUCCESS);
}
