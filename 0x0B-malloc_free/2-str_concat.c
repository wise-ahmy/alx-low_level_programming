#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *result = malloc(len1 + len2 + 1);

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	if (result == NULL)
	{
	return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

