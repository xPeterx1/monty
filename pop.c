#include "monty.h"
/**
 * pop - h
 * @stack: 1
 * @line_number: 2
 * Return: 1
*/
void pop(stack_t **stack, unsigned int line_number)
{
	 stack_t *tmp;
	(void) line_number;
	if (*stack == NULL)
	exit(EXIT_FAILURE);
	tmp = *stack;
	printf("%d\n", tmp->n);
	*stack = tmp->next;
	(*stack)->prev = NULL;
	free(tmp);

}
