#include <unistd.h>

/**
 * _putchar - writes the character a to stdout
 * @a: input
 * Return: on success 1
 * on error, -1 is returned, errno is set appropriately
 */
int _putchar(char a)
{
	return(write(1, &a, 1));
}
