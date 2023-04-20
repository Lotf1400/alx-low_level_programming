#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to use
 * @size: number of elements in the array
 * @cmp: is a pointer to a function
 * Return: 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
