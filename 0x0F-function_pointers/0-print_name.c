#include "function_pointers.h"
#include <stdio.h>
/**
 * prijnt_name - print name using pinter to function
 * @name: string to add
 * @f: pointer to function
 * Retur: return nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
