#include "monty.h"

/**
 * swap - swap two elements
 * @stack: head of stack
 * @line_number: line number
 */
void swap_list(stack_t **stack, unsigned int line_number)
{
	register int tmp;
	stack_t *current = *stack;
	stack_t *next;

	if (!current || !current->next)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line_number);
		fclose(strct.file);
		free(strct.line);
		free_stck(strct.stack);
		exit(EXIT_FAILURE);
	}
	next = current->next;
	tmp = current->n;
	current->n = next->n;
	next->n = tmp;
}

/**
 * nop - do anything
 * @stack: head's stack
 * @line_number: line number
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
