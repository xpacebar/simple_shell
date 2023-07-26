#ifndef _SHELL_H_
#define _SHELL_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>

#define MAX_BUFF_SIZE 1024
#define MAX_COMMAND_LENGTH 100

int display_prompt(void);
int execute_command(char *command);









#endif
