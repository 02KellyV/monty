#include "monty.h"

/**
 * pint - print first node
 * @stack: head stack
 * @line_number: line number
 * Return: (void)
 */


/**

strct_t pint(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (!current)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", line_number);
		fclose(strct.file);
		free(strct.line);
		free_stck(strct.stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", current->n);
	return (strct_t);
}

**/

/**
* pop - removes the top element of the stack
* @stack: pointer to the head of the list
* @line_number: line number of instruction
*/

/**

strct_t pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	stack_t *next;

	if (!current)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
		fclose(strct.file);
		free(strct.line);
		free_stck(strct.stack);
		exit(EXIT_FAILURE);
	}
	next = current->next;
	free(current);
	*stack = next;
	current = *stack;
	if (current)
		current->prev = NULL;
	return (strct_t);
}

*/
