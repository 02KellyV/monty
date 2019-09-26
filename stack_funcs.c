/**
 * pall - prints a doubly linked list
 *
 * Return: void
 */

void pall();
{
	stack_t *node;

	strct.stack = *node;

	if (strct.stack == NULL)
	{
		dprintf(STDERR_FILENO,"L%d: invalid stack\n", linenum);
		exit(EXIT_FAILURE);
	}

	while (strct.stack)
	{
		printf("%d\n", strct.stack -> n);
	        strct.stack = strct.stack -> next;
	}
}

