#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates the memory
 * @b: the number of bytes to allocate
 * Return: a pointer, if it fails return 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
