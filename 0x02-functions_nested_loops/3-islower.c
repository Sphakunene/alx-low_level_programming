#include "main.h"
#include<ctype.h>
/**
 * _islower - function checks for lowercase character
 *
 * @c: The character to be checked
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
