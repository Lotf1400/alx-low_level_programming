#include "lists.h"
/**
 * print_listint - prints all the elements of a list_int list
 * @h: a ptr that points to the list
 * Return: the num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t def = 0;

	while (h)
	{
		printf("%d\n", h->n);
		def++;
		h = h->next;
	}

	return (def);
}
