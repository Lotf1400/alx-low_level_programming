#include "main.h"
/**
 * clear_bit - it sets a value of a bit to 0
 * @index: a given index
 * @n: a ptr to the the bit
 * Return: 1 (success), -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
