#include "monty.h"
/**
 * functions_execution - t
 * @command: hy
 * Return: 1
*/

int functions_execution(tree *command)
{
	stack_t *head;
	int num;
	int i;
	tree *tmp;
	instruction_t database[3] = {
	{"push", add_node_stack},
	{"pall", print_stack},
	{"pint", print_top}
	};
	tmp = command;

	i = 0;
	if (command == NULL)
	{
		return (-1);

	}
	num = sizeof(database) / sizeof(database[0]);
	while (1)
	{
		while (!(strcmp(tmp->function_name, database[i].opcode)) && i < num)
		{
			database[i].f(&head, tmp->arg);
			tmp = tmp->next;
			i = 0;
			if (tmp == NULL)
			{
			return (1);
			}
		}
		i++;
	if (i == num)
	{
	fprintf(stderr, "L%d: unknown instruction %s \n",
	tmp->line, tmp->function_name);
	return (-1);
	}
	}
}
