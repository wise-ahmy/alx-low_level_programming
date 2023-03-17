#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %lu bytte(s)\n", sizeof(char));
	printf("size of a int: %lu bytte(s)\n", sizeof(int));
	printf("size of a long int: %lu bytte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu bytte(s)\n", sizeof(long long int));
	printf("size of a float: %lu bytte(s)\n", sizeof(float));
}
