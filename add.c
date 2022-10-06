#include "monty.h"

/**
 * add - Adds an element to the top of the stack
 * @stack: The head of the initial stack
 * @line_number: The line number(monty file)
 *  * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *oldhead = NULL;

	if (*stack == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	head->next->n = (head->n + head->next->n);

	oldhead = head;
	*stack = head->next;

	free(oldhead);
}