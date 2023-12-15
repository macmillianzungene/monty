#include "monty.h"

/**
 * stack - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the top of the stack
 * @line_number: value of the new node
 * Return: nothing
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	/* Set the global variable for the data format to STACK */
	data_format = STACK;
}
