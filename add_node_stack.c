#include "monty.h"
/**
 * add_node_stack - m
 * @stack: h
 * @line_number: s
 * Return: 1
 **/

void add_node_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		free(stack);
		return;
	}

	if (stack == NULL)
	{
		return;

	}
	newnode->n  = line_number;
	if (*stack == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*stack = newnode;

	}

	else
	{
		newnode->next = *(stack);
		newnode->prev = NULL;
		(*stack)->prev = newnode;
		*(stack) = newnode;

	}

}
