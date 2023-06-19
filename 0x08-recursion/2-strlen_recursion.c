#include "main.h"
/**
 * _strlen_recursion: return length of a string
 * @s: length og sting to be measured
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
    int longit = 0;
    if (*s)
    {longit++;
	longit += _strlen_recursion(s + 1);
    }
    return (longit);
}
