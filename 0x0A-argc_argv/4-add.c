#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: Always 0(success)
 *
 */
int check_num(char *str)
{
	/* variable declaration*/
	unsigned int count
	count = 0;

	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count]) /*check if str there are string*/

				{
				return (0);
				}

				count++;
	}
				return (1);
}

/**
 * main - prints the name of the argument
 * @argc: count argument
 * @argv: argument vector
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
/*declaring variable*/
	
	int count;
	int sum = 0;
	int str_to_int;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argc[count]); /*ATOI convert string to int*/

				sum += str_to_int;
		}

		/*conditions if one of the numbers contain symbol that are not digit*/
		else
		{
			printf("Error\n");
		return (1);
		}
		count++;
	}
		printf("%d\n", sum); /*print sum*/
		return (0);
}

