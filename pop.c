#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: the stack to pop
 * @line_number: number of the line
 */
void pop(Stack *stack, int line_number)
{
	if (isEmpty(stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack->top--;
}

