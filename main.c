#include "monty.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Pointer to arguments array
 * Return: 0 on success or 1 on error
 */

int main(int argc, char **argv[])
{
	FILE *file;
	char chr;
	char letter;
	size_t len;
	char **opcode;
	int boole = 0, i = 0;


	/*open*/
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		dprintf(2,"Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*validate*/
	if (argc != 2)
	{
		dprintf(2,"USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	/*get info*/
	file = fopen(argv[1], "r");
	boole = (read =  getline(&letter, &len, file);
        while (boole != -1)
        {
		opcode[i] = strdup(line);
		i++
                /*argv[1]*/
        }
	opcode[i] = NULL;
	/*print info*/
	for (i = 0; opcode[i]; i++)
	{
		dprintf("line %i: %s", i, opcode[i]);
	}
	fclose(file);
	return (EXIT_SUCCESS);
}
