#include "main.h"
/**
 * puts_half - returns the length of a string
 * @str: string
 * Return: length
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (*str)
	{
		count++;
		s++;
	}
	for (i 0; i < count; i++)
		str--;
	i = (count % 2) ? count / 2 : (count + 1) / 2;
	for (; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
