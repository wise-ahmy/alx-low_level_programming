#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of program
 * @argv: array of arguments
 * @argc; number of arguments
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
