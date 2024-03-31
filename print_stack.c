#include "monty.h"
/**
 * print_dlistint - yes
 * @h: hellp
 * Return: n
*/
void print_stack(stack_t **stack, unsigned int line_number)
{
	 stack_t *tmp;
	(void) line_number;

	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return;

}
