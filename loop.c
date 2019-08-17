#include "shell.h"
#include <stdio.h>
/**
 * loop - loop through
 * Return: void
 */

void loop(void)
{
	ssize_t line;
	/*char **args;*/
	int status;
	char *buff;
	size_t BUFSIZE = 1024;
	buff = malloc(BUFSIZE);
	do
	{
		write(1, "$ ", 2);
		line = getline(&buff, &BUFSIZE, stdin);
		/* check line if getline fails */
		/*args = strtok(line);
		status = execve(args);
		free(line);
		free(args);*/
		write(1, buff, line);
	}
	while (status);
	free(buff);
}
