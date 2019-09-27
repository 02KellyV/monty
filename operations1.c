#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: head stack
 * @line_number: line number
 * Return: (void)
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *next;

	if (!current)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	next = current->next;
	free(current);
	*stack = next;
	current = *stack;
	if (current)
		current->prev = NULL;
}

/**
 * swap - swap two elements
 * @stack: head of stack
 * @line_number: line number
 * Return: (void)
 */
void swap(stack_t **stack, unsigned int line_number)
{
	register int tmp;
	stack_t *current = *stack;
	stack_t *next;

	if (!current || !current->next)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line_number);
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
 * Return: (void)
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
