#include "monty.h"

/**
 * refractor - to initialize in empty data
 * Return: (void)
 */
strct_t strct;
void refractor(void)
{
	strct.file = NULL;
	strct.line = NULL;
	strct.stack = NULL;
	strct.line_number = 1;
	strct.state = 0;
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Pointer to arguments array
 * Return: 0 on success or 1 on error
 */
int main(int argc, char **argv)
{
	char *opcode, *val;
	ssize_t read;
	size_t len = 0;

	refractor();
	/*validate*/
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	/*open*/
	strct.file = fopen(argv[1], "r");
	if (!strct.file)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*get line*/
	read = getline(&strct.line, &len, strct.file);
	while (read != -1)
	{
		opcode = strtok(strct.line, " ");
		if (*opcode == '#' || *opcode == '\n')
		{
			strct.line_number++;
			continue;
		}
		if (strcmp(opcode, "push") == 0)
		{
			val = strtok(NULL, " ");
			strct.state ? push(val) : push1(val);
			strct.line_number++;
			continue;
		}
		lst_opcode(&strct.stack, opcode);
		strct.line_number++;
	}
	return (0);
}
