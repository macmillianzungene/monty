#include "monty.h"

/**
 * queue - sets the format of the data to a queue (FIFO)
 * @stack: double pointer to the top of the stack
 * @line_number: value of the new node
 * Return: nothing
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;

	/* Set the global variable for the data format to QUEUE */
	data_format = QUEUE;
}
