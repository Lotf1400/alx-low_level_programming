#include "lists.h"
/**
 * find_listint_loop - it finds the loop in the list
 * @head: ptr to the first node
 * Return: the adress of the node where the loop
 * starts, otherwise NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (!head)
		return (NULL);

	while (first && second && second->next)
	{
		second = second->next->next;
		first = first->next;
		if (second == first)
		{
			first = head;
			while (first != second)
			{
				first = first->next;
				second = second->next;
			}
			return (second);
		}
	}

	return (NULL);
}
