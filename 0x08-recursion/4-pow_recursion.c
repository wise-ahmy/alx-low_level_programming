#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @y: value of power
 * @x: value to be raise
 * Returns: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
