#include <stdio.h>
#include "main.h"
/**
 *print_square - function a square
 *@n : size of a square
 */

void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0  ; j < n ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
