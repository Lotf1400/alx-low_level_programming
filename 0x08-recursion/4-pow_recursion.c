#include "main.h"
/**
 * _pow_recursion - returns the value of x to the power y
 * @x: the value
 * @y: the power
 * Return: the value with the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
