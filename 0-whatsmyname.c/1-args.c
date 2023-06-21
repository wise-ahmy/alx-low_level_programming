#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of program
 * @argv: array of arguments
 * @argc; number of arguments
 * Return: Always 0(success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
(void) argv; /*ignore argv*/
	printf("%d\n", argc);

	return (0);
}
