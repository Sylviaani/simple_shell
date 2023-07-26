#include <sys/types.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>
#define MAX_COMMAND_LENGTH 1024

/**
 * handle_arguments - function thst handles command arguments
 * @args: argument one
 * @err_msg: argument two
 */
void handle_arguments(char *args[], char *err_msg)
{
	pid_t pid;
	int status;

	if (_strcmp(args[0], "ls") == 0)
	{
		args[0] = "/bin/ls";
	}
	if (access(args[0], F_OK) == -1)
	{
		perror(err_msg);
		return;
	}
	pid = fork();
	if (pid < 0)
	{
		perror(err_msg);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror(err_msg);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (waitpid(pid, &status, 0) == -1)
		{
			perror(err_msg);
			exit(EXIT_FAILURE);
		}
	}
}
/**
 * execute_command - function that handles command lines
 * @args: argument one
 * @err_msg: argument two
 *
