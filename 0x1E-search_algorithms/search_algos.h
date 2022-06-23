#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search1(int *array, size_t size, int value);

int binary_search(int *array, int l1, int r1, int val);
int advanced_binary(int *array, size_t size, int value);

#endif
