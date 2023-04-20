#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print each array element on a new line
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL || action == NULL)
		return;
	for (y - 0; y < size; y++)
	{
		action(array[y]);
	}
}
