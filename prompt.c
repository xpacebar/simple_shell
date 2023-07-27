#include "shell.h"

/**
 * display_prompt - The prompt function for the shell
 * Return: Void
 */

int display_prompt(void)
{
	char prompt[] = "#cisfun$ ";

	write(STDIN_FILENO, prompt, 9);
	return (0);
}
