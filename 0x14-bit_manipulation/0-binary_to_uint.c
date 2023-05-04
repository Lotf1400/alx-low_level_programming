#include "main.h"
/**
 * binary_to_uint - it converts a binary num to
 * an unsigned int
 * @b: a str that contains the binary num to convert
 * Return: the converted num, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int a = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		a = 2 * a + (b[i] - '0');
	}

	return (a);
}
