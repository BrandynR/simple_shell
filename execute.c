#include "shell.h"

/**
 * execute - forks to child process to execute command
 * @fullPath: full directory with cmd
 * @command: user input
 * Description: executes command
 * Return: status
 */
int execute(char *fullPath, char **command)
{
	pid_t child;
	int status = 0;

	child = fork();
	if (child == 0)
	{
		status = execve(fullPath, command, NULL);
		exit(status);
	}
	else
		wait(NULL);
	return (status);
}
