#include "monty.h"

/**
 * read_file - parses the monty file
 * @stack: stack
 * Return: void
 *
 */

void read_file(stack_t **stack)
{

	unsigned int line_num = 1;
	char *line = NULL;
	char *cmd;
	ssize_t read_line;
	size_t length = 0;

	while ((read_line = getline(&line, &length, efs.fp)) != -1)
	{
		cmd = strtok(line, DELIMS);

		efs.line = line;
		if (cmd)
			check_command(stack, cmd, line_num);


		line_num++;
	}

}
