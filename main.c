#include "shell.h"
/**
 * main - main function
 * @argc: number of arguements
 * @argv: arguement
 * @envp: program’s environment
 * Return: 0
 */
int main(int argc, char *argv[], char **envp)
{
	int i = 0;
	while(*envp)
	{
		printf("%s",*envp);
		printf("\n");
		*envp++;
	}

	loop();
	return(0);
}
