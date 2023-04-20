#include "function_pointers.h"
#include <stdio.h>
/**
 * array_ierator - executes a function given as a parameter
 * on each element of the array
 * @array: the array to use
 * @size: the elements
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
