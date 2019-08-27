#include "shell.h"
void  handler(int sig)
{
	signal(sig, SIG_IGN);
	write (1, "\n", 1);
	prompt();
	signal(SIGINT, handler);
}
