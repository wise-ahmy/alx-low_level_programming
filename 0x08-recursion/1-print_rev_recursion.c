#include "main.h"
/**
 * _print_rev_recursion: Print a string in reverse.
 * @s: input value
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

