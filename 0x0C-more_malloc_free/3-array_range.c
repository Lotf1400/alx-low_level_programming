#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min contains values
 * @max: where to include the min values
 * Return: pointer to the newly array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, abc;

	if (min > max)
		return (NULL);

	abc = max - min + 1;
	ptr = malloc(sizeof(int) * abc);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
