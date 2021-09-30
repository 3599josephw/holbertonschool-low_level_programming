#include "main.h"
/**
 * times_table - stuff
 *
 * Return: yeehaw
 */
void times_table(void)
{
int i;
int j;
int k;
  for (i = '0'; i <= '9'; i++)
    {
      for (j = '0'; j <= '9'; j++)
	{
	  k = i * j; 
	  _putchar(k);
	}
    }
}
