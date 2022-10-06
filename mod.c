#include "monty.h"

/**
 * mod - Modulos the second element by the top of the stack
 * @stack: head of stack
 * @line_number: The line number of the monty file
 * Return: void
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *oldhead = NULL;

	if (*stack == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	if (head->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		early_free(stack);
		exit(EXIT_FAILURE);
	}

	head->next->n = (head->next->n % head->n);

	oldhead = head;
	*stack = head->next;

	free(oldhead);
}