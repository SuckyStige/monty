#include "monty.h"
/*
 * push - add an element to the stack
 * @h: pointer
 * @line: pointer to line
 * @l: line number
 */
void push(stack_t **h, char *line, unsigned int l)
{
	char *start_n;
	stack_t *node;

	start_n = reach_number(line);
	if (start_n == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", l);
		free(line);
		free(*h);
		*h = NULL;
		exit(EXIT_FAILURE);
	};

	node = add_node(h, atoi(start_n));
	free(line);
	if (node == NULL)
	{
		puts("Error: malloc failed");
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
}
