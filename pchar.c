#include "monty.h"

/**
 * pchar - prints the char at the top of the stack, followed by a new line
 * @stack: double pointer to the top of the stack
 * @line_number: value of the new node
 * Return: nothing
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (temp->n < 0 || temp->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", temp->n);
}

