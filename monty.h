#ifndef FILE_MONTY
#define FILE_MONTY
#define _GNU_SOURCE

/* imports */
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct strct_s - struct of info's structs
 * @sta
 * @line_number: line number
 * @queue_status: off by default
 * Description: global struct with program info
 */
typedef struct strct_s
{
	FILE *file;
	char *line;
	stack_t *stack;
	unsigned int line_number;
} strct_t;
extern strct_t strct;

/* prototypes */
void add(char *value);

#endif
