#iclude "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count;
	}
		while (count)
		{
			s--;
			_putchar(*s);
			count--;
		}
		_putchar('\n');
}
