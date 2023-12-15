#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: The stack to print from
 */
void pint(Stack *stack)
{
	if (isEmpty(stack))
	{
		fprintf(stderr, "L<line_number>: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->array[stack->top]);
}

