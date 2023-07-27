#include "shell.h"

/**
 * parse_command - the function to split the argument
 * @command: The command to execute
 * @args: The argument to be executed
 * Return: n (on success)
 */

int parse_command(char *command, char *args[])
{
	int n = 0;
	char *arg;

	arg = strtok(command, " ");
	while (arg != NULL && n < MAX_BUFF_SIZE - 1)
	{
		args[n++] = arg;
		arg = strtok(NULL, " ");
	}
	args[n] = NULL;
	return (n);
}
