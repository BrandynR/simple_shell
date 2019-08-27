#include "shell.h"
/**
 * handler - determines how to  behaves when it is delivered the signal
 * @sig: integer
 * Return: void
 */
void  handler(int sig)
{
	signal(sig, SIG_IGN);
	write(1, "\n", 1);
	prompt();
	signal(SIGINT, handler);
}
