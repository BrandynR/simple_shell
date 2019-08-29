#include "shell.h"

/**
 * get_line - get line from command
 * Return: buffer
 */
char *get_line(void)
{
	char *buf = NULL;
	size_t bufsize = 0;
	int test;

	test = getline(&buf, &bufsize, stdin);
	buffers(NULL, NULL, NULL, NULL, NULL, buf, NULL, NULL, NULL);
	if (test == EOF)
	{
		buffers(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
		_exit(0);
	}
	return (buf);
}

/**
 * split_line - split line into tokens
 * @line: command line input
 * Return: tokens
 */
char **split_line(char *line)
{
	char *dup_buf;
	char *token;
	char *toks;
	char **tok;
	int i = 1;

	dup_buf = _strdup(line);
	token = strtok(line, DELIM);
	while (token)
	{
		token = strtok(NULL, DELIM);
		i++;
	}
	tok = malloc(4096);
	buffers(NULL, NULL, NULL, NULL, NULL, NULL, tok, NULL, NULL);
	toks = strtok(dup_buf, DELIM);
	i = 0;
	while (toks)
	{
		tok[i] = toks;
		toks = strtok(NULL, DELIM);
		i++;
	}
	tok[i] = '\0';
	return (tok);
}
