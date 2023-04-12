#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: the size of the array
 * @c: the character to assign
 * Return: pointer to the array, if it fails NULL
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int a;

	i = malloc(sizeof(char) * size);
	if (size == 0 || i == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		i[a] = c;
	return (i);
}
