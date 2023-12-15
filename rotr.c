#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: double pointer to the top of the stack
 * @line_number: value of the new node
 * Return: nothing
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last = NULL;
	stack_t *second_to_last = NULL;

	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
		return;

	last = *stack;
	while (last->next)
	{
		second_to_last = last;
		last = last->next;
	}

	second_to_last->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
}
