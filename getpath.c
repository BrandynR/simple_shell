#include "shell.h"
/**
 * pathCat - concats directory and user input to check for builitin
 * @dir: directory
 * @input: user input
 * Return: buffer to directory
 */
char *pathCat(char *dir, char *input)
{
	int i, k, len1, len2;
	char *buf;

	len1 = _strlen(dir);
	len2 = _strlen(input);

	buf = malloc(sizeof(char) * (len1 + len2 + 1));

	i = 0;
	while (i < len1)
	{
		buf[i] = dir[i];
		i++;
	}
	k = 0;
	while (i < (len1 + len2))
	{
		buf[i] = input[k];
		i++;
		k++;
	}
	buf[i] = '\0';
	return (buf);
}

/**
 * get_env - gets env in order to navigate PATH
 * @env: double pointer
 * Return: buf
 */
char *get_env(char **env)
{
	int i, k, len;
	char *str = "PATH=";
	char *start, *buf;

	i = 0;
	while (env[i])
	{
		k = 0;
		while (env[i][k] == str[k])
		{
			if (env[i][k + 1] == str[k + 1])
			{
				start = env[i];
				break;
			}
			k++;
		}
		i++;
	}
	len = _strlen(start);
	buf = malloc(sizeof(char) * len + 1);

	i = 5;
	k = 0;
	while (start[i] != '\0')
	{
		if (start[i] == ':')
		{
			buf[k] = '/';
			k++;
		}
		buf[k] = start[i];
		i++;
		k++;
	}
	buf[k] = '/';
	k++;
	buf[k] = '\0';
	return (buf);
}

/**
 * dirTok - split directories to tokens
 * @env: double pointer
 * Return: tokens
 */
char **dirTok(char **env)
{
	char **tokens;
	char *tok;
	int i, j;
	char *dir;

	dir = get_env(env);
	i = 0;
	j = 0;
	while (env[j])
		j++;
	tokens = malloc(sizeof(char *) * j);
	tok = strtok(dir, " :");
	while (tok != NULL)
	{
		tokens[i] = tok;
		i++;
		tok = strtok(NULL, " :");
	}
	tokens[i] = NULL;
	return (tokens);
}

/**
 * checkPath - checks command input against path
 * @dir: dirctory tokens
 * @command: command line input
 * Return: full path on success
 */
char *checkPath(char **dir, char *command)
{
	struct stat st;
	char *fullPath;

	if (command[0] == '/')
		return (command);

	while (*dir)
	{
		fullPath = pathCat(*dir, command);
		if (stat(fullPath, &st) == 0)
			return (fullPath);
		dir++;
	}
	free(fullPath);
	return (NULL);
}
