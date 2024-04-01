#include "monty.h"
/**
 * print_stack - yes
 * @stack: hellp
 * @line_number: 1
 * Return: n
*/
void print_stack(stack_t **stack, unsigned int line_number)
{
	 stack_t *tmp;
	(void) line_number;
	if (*stack == NULL)
	exit(EXIT_FAILURE);
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return;

}
