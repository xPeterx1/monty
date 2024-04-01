#include "monty.h"
/**
 * print_top - yes
 * @stack: hellp
 * @line_number: 1
 * Return: n
*/
void print_top(stack_t **stack, unsigned int line_number)
{
	 stack_t *tmp;
	(void) line_number;
	if (*stack == NULL)
	exit(EXIT_FAILURE);
	tmp = *stack;
	printf("%d\n", tmp->n);
}
