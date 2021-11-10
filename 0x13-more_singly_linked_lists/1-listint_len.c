#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 * @h: the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	return (i);
}
