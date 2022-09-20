#include <stdio.h>
#include "main.h"
/**
 *print_line- function draws the a straight line
 *@n : value which specifies line size
 */

void print_line(int n)
{
	int ch;

	for (ch = 0 ; ch < n ; ch++)
	{
		if (n > 0)
		{
			putchar('_');
		}
	}
putchar('\n');

}
