#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: stack to swap
 * @line_number: number of the line
 */
void swap(Stack *stack, int line_number)
{
	int temp;

	if (stack->top < 1)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = stack->array[stack->top];
	stack->array[stack->top] = stack->array[stack->top - 1];
	stack->array[stack->top - 1] = temp;
}

