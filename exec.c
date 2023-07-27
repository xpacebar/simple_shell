#include "shell.h"

/**
 * execute_command - Function to execute the command
 * @command: The command to be executed
 * Return: 0(Success)
 */

int execute_command(char *command)
{
	pid_t pid = fork();
	char *argv[] = {command, NULL};
	int status;

	if (pid == -1)
	{
		perror("Error from fork\n");
		exit(EXIT_FAILURE);
		return (-1);
	}
	if (pid == 0)
	{
		execve(command, argv, NULL);
		perror("/shell");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&status);
	}
	return (0);
}
