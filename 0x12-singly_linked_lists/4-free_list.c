#include <stdlib.h>
#include "lists.h"
/**
 * free_list - it frees a list list_t
 * @head: a pointer to list_t
 */

void free_list(list_t *head)
{
	list_t *dest;

	while (head)
	{
		dest = head->next;
		free(head->str);
		free(head);
		head = dest;
	}
}
