#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int i = 0, curlen;
	char *curstr;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			curstr = "(nil)";
			curlen = 0;
		}
		else
		{
			curstr = current->str;
			curlen = current->len;
		}
		printf("[%d] %s\n", curlen, curstr);
		i++;
		current = current->next;
	}

	return (i);
}
