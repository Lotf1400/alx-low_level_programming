#include "lists.h"
/**
 * get_nodeint_at_index - it returns the node of a listint_t
 * list
 * @head: pointer to the first node
 * index: the index of the node
 * Return: return the node, if it doesn't exit NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *abc = head;
	unsigned int a;

	while (abc && a < index)
	{
		abc = abc->next;
		a++;
	}
	
	return (abc ? abc : NULL);
}
