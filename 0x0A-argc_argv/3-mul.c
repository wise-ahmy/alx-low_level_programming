#include <stdio.h>
#include "main.h"

/**
 * main - prints products of two numbers
 * @argc: number of arguments
 * @argv: arguments pass to program
 * Return: Always (0) success, (1) Error
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
