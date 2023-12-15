#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: double pointer to the top of the stack
 * @line_number: value of the new node
 * Return: nothing
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	if (temp == NULL || temp->next == NULL)
		return;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = (*stack)->prev;
	(*stack)->prev->prev = temp;
	(*stack)->prev->next = NULL;
}
