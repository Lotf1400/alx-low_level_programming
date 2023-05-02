#include <stdlib.h>
#include "main.h"
/**
 * _realloc - it reallocates a memory block
 * @ptr: a pointer
 * @old_size: the old size of the memory
 * @new_size: the new size of the memory
 * Return: a ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *abc;
	char *prv;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	 abc = malloc(new_size);
	 if (!abc)
		 return (NULL);

	 prv = ptr;

	 if (new_size < old_size)
	 {
		 for (i = 0; i < new_size; i++)
			 abc[i] = prv[i];
	 }

	 if (new_size > old_size)
	 {
		 for (i = 0; i < old_size; i++)
			 abc[i] = prv[i];
	 }

	 free(ptr);
	 return (abc);
}
