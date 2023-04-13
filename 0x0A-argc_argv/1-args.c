#include <stdio.h>
#include "main.h"
/**
 * main - print the title of program
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
