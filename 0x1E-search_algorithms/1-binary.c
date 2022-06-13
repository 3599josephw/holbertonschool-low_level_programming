#include "search_algos.h"

/**
 * binary_search - finds indevalue of value with binary search
 * @array: the array
 * @size: high of the array
 * @value: value to be searched for
 * Return: the indevalue of the value
 */
int binary_search(int *array, size_t size, int value)
{
    int low = 0;
    int mid;
    int high = size - 1;
    int tmp;

    if (array == NULL)
    {
        return (-1);
    }


    while (low <= high) {
        mid = low + (high - low) / 2;

        printf("Searching in array:");

        tmp = low;
        while (tmp <= high)
        {
            printf(" %d", array[tmp]);
            if (tmp != high)
            {
                printf(",");
            }
            tmp++;
        }
        printf("\n");

        if (array[mid] == value)
        {
            return mid;
        }

        if (array[mid] < value)
        {
            low = mid + 1;
        } else
        {
            high = mid - 1;
        }
  }

  return -1;
}