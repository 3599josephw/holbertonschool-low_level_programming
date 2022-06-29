#include "search_algos.h"

/**
 * linear_skip - search a linked list for value
 * @list: the head of the linked list
 * @value: the value to be searched for
 * Return: the index which value is found
 */
skiplist_t *linear_skip(skiplist_t *list, int value) {

    skiplist_t *current = list;
    skiplist_t *prev;

    if (current == NULL)
    {
        return NULL;
    }

    while (current->express != NULL)
    {
        prev = current;
        current = current->express;
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
        {
            return (current);
        }
        if (current->n > value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
            while (prev != current)
            {
                printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
                if (prev->n == value)
                {
                    return prev;
                }
                prev = prev->next;
            }
        }
        if (current->express == NULL)
        {
            prev = current;
            while (current->next != NULL)
            {
                current = current->next;
            }
            printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
            while (prev != NULL)
            {
                printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
                if (prev->n == value)
                {
                    return prev;
                }
                prev = prev->next;
            }
        }
    }
    return (NULL);
}