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

	if (_strcmp(args[0], "ls"ss
