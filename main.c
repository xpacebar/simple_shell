#include "shell.h"

/**
 * main - The main function for the shell
 * @argc: The argument count
 * @argv: the argument vector
 * Return: 0(on success)
 */

int main(int argc, char **argv[])
{
	char *buff = NULL;
	size_t n = 0;
	ssize_t command;

	while (1)
	{
		display_prompt();
		command = getline(&buff, &n, stdin);
		if (command == -1)
		{
			break;
		}
		if (buff[command - 1] == '\n')
		{
			buff[command - 1] = '\0';
		}
		execute_command(buff);
	}
	free(buff);
	return (0);
}
