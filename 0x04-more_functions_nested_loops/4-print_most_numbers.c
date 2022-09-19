#include <stdio.h>
#include "main.h"
/**
 *print_most_numbers- function prints numbers from 0-9
 *except 2 and 4
 *
 *
 *Return: 0 always (success)
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		if (ch != '2' && ch != '4')
		{
			putchar(ch);
		}
	}
putchar('\n');

}
