#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - it counts the num
 * of the nodes in a looped list
 * @head: it points to first node
 * Return: the num of nodes, otherwise 0
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *i, *a;
	size_t delf = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	i = head->next;
	a = (head->next)->next;

	while (a)
	{
		if (i == a)
		{
			i = head;
			while (i != a)
			{
				delf++;
				i = i->next;
				a = a->next;
			}

			i = i->next;
			while (i != a)
			{
				delf++;
				i = i->next;
			}

			return (delf);
		}

		i = i->next;
		a = (a->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - it prints a listint_t
 * list
 * @head: ptr tpo the first node
 * Return: the num of nodes, otherwie exit
 * program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, abc = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
	}

	else
	{
		for (abc = 0; abc < node; abc++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
