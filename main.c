#include "shell.h"
/**
 * main - main function
 * @argc: number of arguements
 * @argv: arguement
 * @envp: program’s environment
 * Return: 0 for sucess
 */
int main(int argc, char **argv, char **envp)
{
	loop(envp);

	return (0);
}
