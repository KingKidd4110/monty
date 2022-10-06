#include "monty.h"

/**
 * pop - deletes element on top of the stack
 * @stack: stack
 * @line_num: line number
 *
 */


void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);

	}

	temp = *stack;
	*stack = (*stack)->next;

	free(temp);

}