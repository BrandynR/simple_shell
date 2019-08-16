#inlcude "shell.h"
/**
 * loop - loop through
 * Return: void
 */
void loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf("> ");
		line = getline();
		args = strtok(line);
		status = execve(args);

		free(line);
		free(args);
	}
	while (status);
}
