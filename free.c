#include "shell.h"
void buffers(char *line, char **command, char **dir, char *combine, char **tokens, char *buf, char **tok, char *buf2, char *dup)
{
	static char *l;
	static char **cmd;
	static char **di;
	static char *co;
	static char **tokn;
	static char *bu;
	static char **to;
	static char *b2;
	static char *du;

	if (!line && !combine && !dir && !command && !tokens && !buf && !tok && !buf2 && !dup)
	{
		if (l)
			free(l);
		if (cmd)
			free(cmd);
		if (di)
			free(di);
		if (co)
			free(co);
		if (tokn)
			free(tokn);
		if (bu)
			free(bu);
		if (to)
			free(to);
		if (b2)
			free(b2);
		if (du)
			free(du);
	}
	if (line)
	{
		if (l)
			free(l);
		l = line;
	}
	if (command)
	{
		if (cmd)
			free(cmd);
		cmd = command;
	}
	if (dir)
	{
		if (di)
			free(di);
		di = dir;
	}
	if (combine)
	{
		if (co)
			free(co);
		co = combine;
	}
	if (tokens)
	{
		if (tokn)
			free(tokn);
		tokn = tokens;
	}
	if (buf)
	{
		if (bu)
			free(bu);
		bu = buf;
	}
	if (tok)
	{
		if (to)
			free(to);
		to = tok;
	}
	if (buf2)
	{
		if (b2)
			free(b2);
		b2 = buf2;
	}
	if (dup)
	{
		if (du)
			free(du);
		du = dup;
	}
}
