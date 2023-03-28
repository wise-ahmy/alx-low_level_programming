#include "main.h"
/**
 * puts2 - function should print only one charater out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int count = 0, i = 0;

	while (*str)
	{
		count++;
		s++;
	}

	for (i = 0; i < count; i++)
		str--;
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
