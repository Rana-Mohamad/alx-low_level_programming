#include "main.h"

/**
  * _isupper - checks for upper case character
  * Return: '1' if it upper case character
  *	otherwise returns '0'
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
