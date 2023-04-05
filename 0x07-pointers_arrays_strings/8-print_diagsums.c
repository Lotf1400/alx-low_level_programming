#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of int
 * @a: the first diagonal
 * @size: second diagonal
 * Return: 0 is success
 */

void print_diagsums(int *a, int size)
{
	int o, b, i;

	o = 0;
	b = 0;

	for (i = 0; i < size; i++)
	{
		o += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		b += a[i * size + (size - i - 1)];
	}
        printf("%d, %d\n", o, b);
}	
