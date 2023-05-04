#include "main.h"
/**
 * get_bit - it returns the value of a bit at a
 * given index
 * @index: the index
 * @n: the bit to return
 * Return: the value of the bit, otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
