#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name passed in
 * @f: function passed in
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
