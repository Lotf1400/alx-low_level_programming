#include "lists.h"
/**
 * free_listint_safe - it frees a listint_t
 * list
 * @h: a ptr
 * Return: the size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t delf = 0;
	int i;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			delf++;
		}
		else
		{
			free(*h);
			*h = NULL;
			delf++;
			break;
		}
	}
	
	*h = NULL;

	return (delf);
}
