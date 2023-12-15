#include "monty.h"

/**
 * pall - Prints all values on the stack
 * @stack: The stack to print
 */
void pall(Stack *stack)
{
	if (isEmpty(stack))
		return;
	for (int i = stack->top; i >= 0; i--)
		printf("%d\n ", stack->array[i]);
}
