#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argv: array of argument
 * @argc: number of argument
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	
	return (0);
}
