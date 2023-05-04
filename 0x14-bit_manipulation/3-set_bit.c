#include "main.h"
/**
 * set_bit - it sets the value of a bit to 1
 * @n: a ptr
 * @index: a given index
 * Return 1 (success), otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
