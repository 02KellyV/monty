#include "monty.h"

void add(char *value)
{
	register int n;
	stack_t *new, *current = strct.stack;
	char *ptr = NULL;

	ptr = strchr(value, '\n');
	if (ptr)
		*ptr = 0;
	if (!strlen(value))
	{
		dprintf(STDERR_FILENO, "L%d: usage: push integer\n", strct.line_number);
		/*add*/exit(EXIT_FAILURE);
	}
	n = atoi(value);
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		/*add*/exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = NULL;
	if (!current)
	{
		new->prev = NULL;
		strct.stack = new;
		return;
	}
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
}
