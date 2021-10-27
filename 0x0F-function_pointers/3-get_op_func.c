#include "function_pointers.h"
/**
 * get_op_func - get the right function
 * @s: operator passed in
 * Return: something
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i]->op == s)
		{
			(*get_op_func(s))(ops[i]->f);
		}
		i++;
	}


}
