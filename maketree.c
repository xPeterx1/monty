#include "monty.h"
/**
 * maketree - m
 * @stack: h
 * @command: s
 * Return: 1
 **/
char *maketree(tree **stack, char **command)
{
	tree *newnode;
	tree *tmp;


	if (stack == NULL)
		return (NULL);
	newnode = malloc(sizeof(tree));
	if (newnode == NULL)
	{
	fprintf(stderr, "Error: malloc failed");
	exit(EXIT_FAILURE);
	}
	newnode->function_name  = command[0];
	if (command[1] !=  NULL)
	newnode->arg  = atoi(command[1]);
	else
	newnode->arg  = -1;
	newnode->line = line;
	newnode->next = NULL;
	if (*stack == NULL)
	{
		newnode->next = NULL;
		*stack = newnode;
	}
	else
	{
		tmp = (*stack);
		while (1)
		{
			if (tmp->next == NULL)
			{
				tmp->next = newnode;
				break;
			}
			tmp = tmp->next;
		}
	}
		return (NULL);
}
