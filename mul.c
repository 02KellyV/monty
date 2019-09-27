#include "monty.h"

/**
 * mul - mul
 * @stack: head stack
 * @line_number: line number
 * Return: (void)
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *next;

	if (!current || !current->next)
	{
		dprintf(STDERR_FILENO, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	next = current->next;
	next->n = (next->n) * (current->n);
	pop(stack, line_number);
}
