#include "lists.h"
/**
 * listint_len - it returns the num of elements in
 * a linked listint_t list
 * @h: a linked list
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
