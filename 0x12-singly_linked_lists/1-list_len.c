#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the num of elements linked in a list
 * @h: pointer
 * Return: the num of elements of a list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
