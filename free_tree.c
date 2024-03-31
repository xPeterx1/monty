#include "monty.h"
/**
 * free_tree - hy
 * @list: 2
 * Return: 1
*/
void free_tree (tree *list)
{
	tree *tmp, *holder;

	tmp = list;
	while (tmp != NULL)
	{
		holder = tmp->next;
		free(tmp);
		tmp = holder;

	}

}
