#include "monty.h"
/**
 * add_dnodeint - m
 * @head: h
 * @n: s
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
		*stack = newnode;

	}

	else
	{
		newnode->next = *(stack);
		*(stack) = newnode;

	}

}
