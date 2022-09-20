#include <stdio.h>
#include "main.h"
/**
 *print_triangle - function print a triangle
 *@size : size of a square
 */

void print_triangle(int size)
{
	int i;
	int j;
	int sp;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (sp = size - i ; sp > 1; sp--)
			{
				_putchar(' ');
			}
			for (j = 0  ; j <= i ; j++)
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
