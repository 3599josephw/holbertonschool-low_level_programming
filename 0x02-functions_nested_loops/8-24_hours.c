/**
 * jack_bauer - stuff
 *
 * Return: yeehaw
 */
#include <stdio.h>
#include "main.h"
void jack_bauer(void)
{
int h, m;
for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h < 10)
			{
			printf("0");
			}
			printf("%d:", h);
			if (m < 10)
			{
			printf("0");
			}
			printf("%d\n", m);
			
		}
	
	}
  
}
