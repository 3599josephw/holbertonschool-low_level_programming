#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}

	return (i);
}
