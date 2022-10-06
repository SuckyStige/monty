#include "monty.h"
#include <stdio.h>

/*
 * pop - remove an element from the stack
 * @x: pointer
 * @l: line number
 */
void pop(stack_t **x, unsigned int l)
{
	stack_t *node;

	if (_strcmp(flag, "stack") == 0)
		node = pop_s(x);
	else
		node = dequeue(x);

	if (node == NULL)
	{
		printf("L%d: can't pop an empty stack %s\n", l, flag);
		free_stack(*x);
		exit(EXIT_FAILURE);
	}
	free(node);
}

