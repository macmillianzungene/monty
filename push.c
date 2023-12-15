#include "monty.h"

/**
 * push - Pushes an item onto the stack
 * @stack: The stack to push onto
 * @item: The item to push
 */
void push(Stack *stack, int item)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
}
