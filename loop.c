#include "shell.h"
#include <string.h>
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
	char *token;
	size_t BUFSIZE = 1024;
	buff = malloc(BUFSIZE);
	do
	{
		write(1, "$ ", 2);
		/*
		  line = read_input(buff); */
		line = getline(&buff, &BUFSIZE, stdin);
		if (_strcmp (buff, "exit\n") == 0)
		{
			free (buff);
			exit (EXIT_SUCCESS);
		}
		token = strtok(buff, " ");
		write(1, token, strlen(token));
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
