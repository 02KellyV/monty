#include "monty.h"

/**
 * free_stck - free stack_t
 * @head: pointer head stack
 */
void free_stck(stack_t *head)
{
	stack_t *tmp, *current = head;

	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}

/**
 * _isdigit - is digit
 * @str: string
 * Return: true or false
 */
int _isdigit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i == 0 && str[i] == '-')
		{
			i++;
			continue;
		}
		else if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
