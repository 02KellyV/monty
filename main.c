#include "monty.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Pointer to arguments array
 * Return: 0 on success or 1 on error
 */
int main(int argc, char **argv[])
{

	char *opcode = NULL, *str = NULL, *str_num;
	size_t len = 0;
        FILE *file;
	unsigned int line_number;
	int number;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}



	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	while (getline(&str, &len, file) != -1)
	{
		line_number++;
		opcode = strtok(str, " \t\n");
		if (opcode)
		{
			if (!(strcmp(opcode,"push") == 0))
			{

				str_num  = strtok(NULL, " \t\n");
				if (str_num == NULL)
				{
					printf("L<line_number>: usage: push integer\n");
					exit(EXIT_FAILURE);
				}
				number = atoi(str_num);
				printf("%s %d", opcode, number);
			}
		}
	}


	fclose(file);

	return (EXIT_SUCCESS);
}


