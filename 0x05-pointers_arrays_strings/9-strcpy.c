#include "main.h"
/**
 * _strcopy - copy a string
 * @dest: variable string is copied to
 * @src: string being copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
  int i;

  for (i = 0; src[i] != '\0'; i++)
    {
	dest[i] = src[i];
    }

  return (dest);

}
