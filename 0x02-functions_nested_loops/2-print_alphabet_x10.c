#include "main.h"
/**
 * main - prints _putchar using _putchar
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
