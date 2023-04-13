#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multiplication of two integers
 * @argc: argument count
 * @argv: argument
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 4)
	{
		x = atoi(argv[2]);
		y = atoi(argv[3]);
		printf("%d\n", x * y);
		return (0);
	}
	printf("error\n");
	return (1);
}
