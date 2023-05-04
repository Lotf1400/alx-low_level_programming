#include "main.h"
/**
 * print_binary - it prints the binary representation
 * of a num
 * @n: the num to print
 */

void print_binary(unsigned long int n)
{
	int i, a = 0;
	unsigned long int prev;

	for (i = 63; i >= 0; i--)
	{
		prev = n >> i;

		if (prev & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
			_putchar('0');
	}
	if (!a)
		_putchar('0');
}
