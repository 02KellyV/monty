#include "monty.h"

/**
 * pint - print top stack element and a  a new line.
 * @stack: head stack
 * @line_number: line number
 * Return: (void)
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		dprintf(STDERR_FILENO,"L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stack)->n);
}
