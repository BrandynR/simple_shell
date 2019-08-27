#include "shell.h"
/**
 * handler - determines how to behave when it is delivered a signal
 * @sig: signal
 * Return: void
 */
void  handler(int sig)
{
	signal(sig, SIG_IGN);
	write(1, "\n", 1);
	prompt();
	signal(SIGINT, handler);
}