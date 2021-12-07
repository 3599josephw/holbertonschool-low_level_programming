#include "lists.h"
/**
 * dlistint_len - returns number of elements in a linked list
 * @h: the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	return (i);
}
