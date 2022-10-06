#include "monty.h"

early_free_struct efs;

/**
 * main - interperter for Monty files
 * @argc: argument count
 * @argv: arguments passed
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */



int main(int argc, char **argv)
{
	stack_t *head = NULL;

	monty_init(argc, argv[1]);

	read_file(&head);

	monty_exit(&head);

	return (EXIT_SUCCESS);
}