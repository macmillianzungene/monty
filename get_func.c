#include "monty.h"

/**
 * get_func - Returns the function associated with the opcode
 * @opcode: The opcode to match
 *
 * Return: The function associated with the opcode,
 * or NULL if no match is found
 */
instruction_t get_func(char *opcode)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", stack},
		{"queue", queue},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].opcode != NULL)
	{
		if (strcmp(opcode, ops[i].opcode) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
