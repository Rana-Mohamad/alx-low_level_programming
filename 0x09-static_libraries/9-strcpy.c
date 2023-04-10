#include "main.h"

/**
  * *_strcpy - function that copies the string pointed to by src
  *	to the buffer pointed to by dest.
  * @dest: string parameter
  * @src: string parameter
  * Return: dest parameter
  */

char *_strcpy(char *dest, char *src)
{
	int i, n = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
