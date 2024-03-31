#include "monty.h"
/**
 * print_dlistint - yes
 * @h: hellp
 * Return: n
*/
void print_tree(tree **stack)
{
	tree *tmp;

	if (stack == NULL)
	return;
	tmp = *stack;

	while (tmp != NULL)
	{
		printf("%s\n", tmp->function_name);
		printf("%d\n", tmp->arg);
		tmp = tmp->next;
	}

}
