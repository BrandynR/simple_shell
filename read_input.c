#include "shell.h"
/**
 * read_input - read the line
 * @buff: buffer
 * Return:
 */
read_input(buff)
{
	read(1, buff, sizeof(buff));

	return (buff);
}
