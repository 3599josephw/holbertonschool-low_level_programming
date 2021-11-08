#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	return (i);
}
