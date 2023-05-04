#include "main.h"
/**
 * flip_bits - returns the num of bits we need to flip
 * to get from one num to another
 * @n: the first num of bits
 * @m: the second num of bits
 * Return: num of bits to be flipped
 */

int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, a = 0;
	unsigned long int prev;
	unsigned long int next = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		prev = next >> i;
		if (prev & 1)
			a++;
	}

	return (a);
}
