#include "main.h"
#include<ctype.h>
/**
 * _isalpha - function checks for alphabetic character
 *
 * @c: The character to be checked
 * Return: 1 if c is lowercase, otherwise 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
